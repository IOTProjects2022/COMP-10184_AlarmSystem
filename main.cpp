// COMP-10184 - Mohawk College
// Application name: PIR Alarm System application

#include <Arduino.h>

// Define input pins for PIR sensor and button
#define PIN_PIR     D5 
#define PIN_BUTTON  D6
S
int PIR_state = LOW;
bool value;


void setup() {
  // Put your setup code here, to run once:

  // Configure the USB serial monitor
  Serial.begin(115200);

  // Configure the LED output 
  pinMode(LED_BUILTIN, OUTPUT);

  // PIR Sensor is an INPUT 
  pinMode(PIN_PIR, INPUT);

  // Button is an INPUT 
  pinMode(PIN_BUTTON, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:

void Stage_1();  


}

void Stage_1(){

  // If motion is detected, LED turns on for 10 seconds.

  value = digitalRead(PIN_PIR);

  if (value == true) {

    digitalWrite(LED_BUILTIN, value);

    delay(10000);

  } else {

    digitalWrite(LED_BUILTIN, !value);

  } 
}

