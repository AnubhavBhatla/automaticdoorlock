#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

char auth[] = "qWzvYadoOXNc0W-F3mWMzQKJYD0dArjQ";

char ssid[] = "Canis Majoris";
char pass[] = "Abhi$123";

static const int servoPin = 15;

Servo servo1;

BLYNK_WRITE(V1) {
  servo1.write(0);
}

BLYNK_WRITE(V2) {
  servo1.write(135);
}

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    Blynk.begin(auth, ssid, pass);
    servo1.attach(servoPin);
    
}

void loop() {
  Blynk.run();
}
