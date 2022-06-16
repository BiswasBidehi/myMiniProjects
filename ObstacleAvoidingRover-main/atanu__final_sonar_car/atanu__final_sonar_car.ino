#include<Servo.h>
#define echoPin 10
#define trigPin 11 
Servo servo;
int val=0,v=0,i=0;
int Range = 30; 
int a=151;
int b=165;
int sonardelay=50;
int turndelay=30;
int uturndelay=10;
long duration=0, distance=0,right_dis=0,left_dis=0,frw_dis=0;

void setup() {
  Serial.begin(9600);
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

void loop(){
 right_dis=0,left_dis=0,frw_dis=0;
 digitalWrite(13,LOW);servoforword();delay(500); 
 frw_dis= sonar(); delay(sonardelay);
 if( frw_dis>= Range){forword();digitalWrite(13,HIGH);}
 else{
   
   stop();delay(500); digitalWrite(13,HIGH); delay(1000);digitalWrite(13,LOW);
   servoright(); 
   right_dis=sonar(); delay(700);
   
   servoleft(); 
   left_dis= sonar(); delay(700);
   
   if(left_dis<Range && right_dis<Range){
     stop();delay(700); digitalWrite(13,HIGH); delay(1000);digitalWrite(13,LOW);
     leftturn();delay(uturndelay);
   }
   else if(right_dis>=Range && left_dis>=Range){
     stop();delay(700); digitalWrite(13,HIGH); delay(1000);digitalWrite(13,LOW);
     rightturn();delay(turndelay);
  }
   else if(left_dis<Range && right_dis>=Range){
     stop();delay(700); digitalWrite(13,HIGH); delay(1000);digitalWrite(13,LOW);
     rightturn();delay(turndelay);
   }

   else if(right_dis<Range && left_dis>=Range){
     stop();delay(700); digitalWrite(13,HIGH); delay(1000);digitalWrite(13,LOW);
     leftturn();delay(turndelay);
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

  int sonar(){
    digitalWrite(trigPin, LOW); 
    delayMicroseconds(2); 
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10); 
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = duration/58.4;
    return distance;
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
