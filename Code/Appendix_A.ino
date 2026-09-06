/*
 * APPENDIX A
 * GSM & GPS-Based Emergency Alert System
 * (SMS and Call Module)
 * 
 * Project: Personal Safety Device for Women
 * Author: Azmath Tabassum | Contributing Member: Khatija Mahveen
 * Note: This is a collaborative Master's project. The core design was led by the primary author.
 */

#include <TinyGPS++.h>
#include <Wire.h>
#include <MPU6050.h>

// ---------------- UARTS ----------------
HardwareSerial sim(1);   // UART1 (GSM Module)
HardwareSerial gps(2);   // UART2 (GPS Module)
TinyGPSPlus gpsData;     // GPS data parser
MPU6050 mpu;             // Accelerometer/Gyroscope

// ---------------- SETTINGS ----------------
// TODO: Replace with the actual emergency contact number before deployment.
String phoneNumber = "+91XXXXXXXXXX"; 
#define EMERGENCY_BTN 32
#define SAFE_BTN 33
#define LED_PIN 2
#define MSG_LED 4

unsigned long lastTriggerTime = 0;
const unsigned long cooldown = 10000; // 10-second cooldown between alerts

// MPU6050 Fall Detection Settings
unsigned long lastFallTime = 0;
float FALL_THRESHOLD = 3.0; // g-force threshold for fall detection

// ------------------------------------------------
void setup()
{
  Serial.begin(115200);
  sim.begin(9600, SERIAL_8N1, 26, 27); // GSM: RX=26, TX=27
  gps.begin(9600, SERIAL_8N1, 16, 17); // GPS: RX=16, TX=17

  pinMode(EMERGENCY_BTN, INPUT_PULLUP);
  pinMode(SAFE_BTN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
  pinMode(MSG_LED, OUTPUT);

  Wire.begin(21, 22); // I2C for MPU6050
  mpu.initialize();
  Serial.println(mpu.testConnection() ? "MPU6050 OK" : "MPU6050 FAIL");

  // Initialize GSM Module
  delay(5000);
  sim.println("AT");      // Handshake
  delay(1000);
  sim.println("ATE0");    // Echo off
  delay(1000);
  sim.println("AT+CMGF=1"); // Set SMS mode to text
  delay(1000);

  Serial.println("ESP32 WOMEN SAFETY DEVICE READY");
}

// ------------------------------------------------
void loop()
{
  updateGPS(); // Continuously read GPS data

  // Manual Emergency Trigger
  if (digitalRead(EMERGENCY_BTN) == LOW)
  {
    if (millis() - lastTriggerTime > cooldown)
    {
      lastTriggerTime = millis();
      triggerEmergency(" EMERGENCY BUTTON PRESSED!");
    }
  }

  // Safe Button to send "I am safe" SMS
  if (digitalRead(SAFE_BTN) == LOW)
  {
    if (millis() - lastTriggerTime > cooldown)
    {
      lastTriggerTime = millis();
      sendSafeSMS();
    }
  }

  checkFallDetection(); // Continuously monitor for falls
}

// ------------------------------------------------
void updateGPS()
{
  while (gps.available())
  {
    gpsData.encode(gps.read());
  }
}

// ------------------------------------------------
void checkFallDetection()
{
  int16_t ax, ay, az;
  mpu.getAcceleration(&ax, &ay, &az);

  // Convert raw values to g-force
  float x = ax / 16384.0;
  float y = ay / 16384.0;
  float z = az / 16384.0;
  float totalAcc = sqrt(x * x + y * y + z * z);

  // Detect sudden high acceleration (indicative of a fall)
  if (totalAcc > FALL_THRESHOLD)
  {
    if (millis() - lastFallTime > cooldown)
    {
      lastFallTime = millis();
      triggerEmergency("⚠ FALL DETECTED – POSSIBLE INJURY!");
    }
  }
}

// ------------------------------------------------
void triggerEmergency(String reason)
{
  digitalWrite(LED_PIN, HIGH);
  digitalWrite(MSG_LED, HIGH);
  Serial.println(reason);
  makeCall();      // Call emergency contact
  sendSMS(reason); // Send SMS with GPS location
  digitalWrite(MSG_LED, LOW);
  digitalWrite(LED_PIN, LOW);
}

// ------------------------------------------------
void makeCall()
{
  sim.print("ATD");
  sim.print(phoneNumber);
  sim.println(";");
  delay(20000); // Wait for call to connect/ring
  sim.println("ATH"); // Hang up
}

// ------------------------------------------------
void sendSafeSMS()
{
  digitalWrite(MSG_LED, HIGH); // SMS sent indication
  delay(1000);
  digitalWrite(MSG_LED, LOW); // reset LED

  sim.print("AT+CMGS=\"");
  sim.print(phoneNumber);
  sim.println("\"");
  delay(500);
  sim.print(" I AM SAFE NOW.\nSituation under control.");
  delay(300);
  sim.write(26); // Ctrl+Z to send SMS

  digitalWrite(MSG_LED, HIGH); // SMS sent indication
  delay(2000);
  digitalWrite(MSG_LED, LOW);

  Serial.println("SAFE SMS SENT");
}

// ------------------------------------------------
void sendSMS(String title)
{
  String message;

  if (gpsData.location.isValid())
  {
    float lat = gpsData.location.lat();
    float lon = gpsData.location.lng();
    message = title + "\n\nLocation:\n";
    message += "Lat: " + String(lat, 6) + "\n";
    message += "Lon: " + String(lon, 6) + "\n";
    message += "Map:\nhttps://maps.google.com/?q=";
    message += String(lat, 6) + "," + String(lon, 6);
  }
  else
  {
    message = title + "\nGPS FIX NOT READY";
  }

  sim.print("AT+CMGS=\"");
  sim.print(phoneNumber);
  sim.println("\"");
  delay(500);
  sim.print(message);
  delay(300);
  sim.write(26); // Ctrl+Z to send SMS

  Serial.println("EMERGENCY SMS SENT");
}
