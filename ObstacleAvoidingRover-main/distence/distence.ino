#include<Servo.h>
#define echoPin 10
#define trigPin 11 
long duration, distance;
void setup(){
    Serial.begin (9600);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
  }
  void loop(){
      sonar();
    }
void sonar(){
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration/58.4;
  Serial.println(distance);
  }
