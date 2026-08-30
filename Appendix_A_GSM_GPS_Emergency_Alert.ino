/*
 * APPENDIX A
 * GSM & GPS-Based Emergency Alert System
 * (SMS and Call Module)
 */

#include <TinyGPS++.h>
#include <Wire.h>
#include <MPU6050.h>

// ---------------- UARTS ----------------
HardwareSerial sim(1); // UART1
HardwareSerial gps(2); // UART2
TinyGPSPlus gpsData;
MPU6050 mpu;

// ---------------- SETTINGS ----------------
String phoneNumber = "+917337427546";
#define EMERGENCY_BTN 32
#define SAFE_BTN 33
#define LED_PIN 2
#define MSG_LED 4

unsigned long lastTriggerTime = 0;
const unsigned long cooldown = 10000;

// MPU6050
unsigned long lastFallTime = 0;
float FALL_THRESHOLD = 3.0;

// ------------------------------------------------
void setup()
{
  Serial.begin(115200);
  sim.begin(9600, SERIAL_8N1, 26, 27);
  gps.begin(9600, SERIAL_8N1, 16, 17);

  pinMode(EMERGENCY_BTN, INPUT_PULLUP);
  pinMode(SAFE_BTN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
  pinMode(MSG_LED, OUTPUT);

  Wire.begin(21, 22);
  mpu.initialize();
  Serial.println(mpu.testConnection() ? "MPU6050 OK" : "MPU6050 FAIL");

  delay(5000);
  sim.println("AT");
  delay(1000);
  sim.println("ATE0");
  delay(1000);
  sim.println("AT+CMGF=1");
  delay(1000);

  Serial.println("ESP32 WOMEN SAFETY DEVICE READY");
}

// ------------------------------------------------
void loop()
{
  updateGPS();

  if (digitalRead(EMERGENCY_BTN) == LOW)
  {
    if (millis() - lastTriggerTime > cooldown)
    {
      lastTriggerTime = millis();
      triggerEmergency(" EMERGENCY BUTTON PRESSED!");
    }
  }

  if (digitalRead(SAFE_BTN) == LOW)
  {
    if (millis() - lastTriggerTime > cooldown)
    {
      lastTriggerTime = millis();
      sendSafeSMS();
    }
  }

  checkFallDetection();
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

  float x = ax / 16384.0;
  float y = ay / 16384.0;
  float z = az / 16384.0;
  float totalAcc = sqrt(x * x + y * y + z * z);

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
  makeCall();
  sendSMS(reason);
  digitalWrite(MSG_LED, LOW);
  digitalWrite(LED_PIN, LOW);
}

// ------------------------------------------------
void makeCall()
{
  sim.print("ATD");
  sim.print(phoneNumber);
  sim.println(";");
  delay(20000);
  sim.println("ATH");
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
  sim.write(26);

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
  sim.write(26);

  Serial.println("EMERGENCY SMS SENT");
}
