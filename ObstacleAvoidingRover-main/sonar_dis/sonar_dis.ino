
#include<Servo.h>
#define echoPin 10
#define trigPin 11 
Servo servo;
long duration, distance,distance_i,distance_f,velocity;
int i,val=0;

void setup() {
  Serial.begin (9600);
  servo.attach(9);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
  
void loop(){
  servoforword();
  sonar_dis();
}
void sonar_dis(){for(i=0;i<5;i++){
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration/58.4;
  Serial.println(distance);
  delay(300);
  }
}

void servoforword(){
  val=map(75,0,180,0,180);
  servo.write(val);
  }
