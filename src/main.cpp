#include <Arduino.h>

const int relePin = 14;

void setup() {
  Serial.begin(9600);

  pinMode(relePin, OUTPUT);


  digitalWrite(relePin, LOW);
}

void loop() {
  digitalWrite(relePin, HIGH);
  printf("Rele ligado\n");
  delay(10000);
  digitalWrite(relePin, LOW);
  printf("Rele desligado\n");
  delay(10000);
}