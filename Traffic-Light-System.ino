#include <Servo.h>
Servo sg90;
int Yellow = 4;
int Red = 2;
int Green = 3;
int IR = 6;
int buzzer = 10;
void setup() {
pinMode(Yellow, OUTPUT);
pinMode(Red, OUTPUT);
pinMode(Green, OUTPUT);
pinMode(buzzer, OUTPUT);
pinMode(IR, INPUT);
sg90.attach(5);
Serial.begin(9600);
}

void loop() {
sg90.write(100);
digitalWrite(Red, LOW);
digitalWrite(Green, HIGH);
delay(5000);
digitalWrite(Green, LOW);
digitalWrite(Yellow, HIGH);
delay(1000);
digitalWrite(Yellow, LOW);
digitalWrite(Red, HIGH);
sg90.write(0);
int s = digitalRead(IR);
while (digitalRead(Red) == HIGH)  
  if (s==0){
    digitalWrite(Yellow, LOW);
    digitalWrite(Green, LOW);
    digitalWrite(Red, HIGH);
    digitalWrite(buzzer, HIGH);
    sg90.write(0);
    delay(30000);
    digitalWrite(buzzer, LOW);
  }
delay(5000);












}
