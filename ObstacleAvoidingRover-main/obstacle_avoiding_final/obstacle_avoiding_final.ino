#include<Servo.h>
#define echoPin 10
#define trigPin 11 
Servo servo;
int val,v;
int Range = 30; 
int a=152;
int b=162;
int sonardelay=58;
int rightturndelay=500;
int leftturndelay=500;
int uturndelay=1000;
long duration, distance;

void setup() {
  Serial.begin (9600);
  servo.attach(9);
 servoforword();
 digitalWrite(13,LOW);
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 
 pinMode(13,OUTPUT);
 
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);

}

void loop() {
  digitalWrite(13,LOW); servoforword(); delay(500);
  sonar(); delay(sonardelay);

 if(distance >= Range){forword();}
 
 else{
    digitalWrite(13,HIGH); stop(); delay(1000);
    digitalWrite(13,LOW);  
    servoright(); delay(500); 
    sonar(); delay(sonardelay);

    if(distance >= Range){
      stop();
      rightturn();delay(rightturndelay); stop();
    }
      
    else{
      stop();
      digitalWrite(13,HIGH);delay(500);
      digitalWrite(13,LOW);  
      servoleft(); delay(1000);
      sonar(); delay(sonardelay);
      
        if(distance >= Range){
          stop();
          leftturn();delay(leftturndelay);
          stop();
          }
        else{
          stop();
          digitalWrite(13,HIGH); delay(1000);
          digitalWrite(13,LOW);
          leftturn();delay(uturndelay);
          stop();  
          }
      } 
    }
}



void stop(){
  digitalWrite(4,LOW);
  analogWrite(5,0);
  analogWrite(6,0);
  digitalWrite(7,HIGH);
  }
void forword(){   
  digitalWrite(4,LOW);
  analogWrite(5,a);
  analogWrite(6,b);
  digitalWrite(7,HIGH);
  }


void leftturn(){  
  digitalWrite(4,HIGH);
  analogWrite(5,a);
  analogWrite(6,b);
  digitalWrite(7,HIGH);
  }
void rightturn(){  
  digitalWrite(4,LOW);
  analogWrite(5,a);
  analogWrite(6,b);
  digitalWrite(7,LOW);
  }

void sonar(){
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration/58.4;
  }

void servoforword(){
  val=map(83,0,180,0,180);
  servo.write(val);
  }

void servoleft(){
  val=map(180,0,180,0,180);
  servo.write(val);
  }

void servoright(){
  val=map(0,0,180,0,180);
  servo.write(val);
  }
