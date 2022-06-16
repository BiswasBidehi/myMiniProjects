#include<Servo.h>
#define echoPin 10
#define trigPin 11 
Servo servo;
int val,v;
int Range = 30; 
int a=152;
int b=160;
int rightturndelay=560;
int leftturndelay=560;
int uturndelay=1000;
long duration, distance;
void setup() {
 Serial.begin (9600);
  servo.attach(9);
  val=map(83,0,180,0,180);
  servo.write(val);
 
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 pinMode(13,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
}

void loop() {
  digitalWrite(13,LOW);
  val=map(83,0,180,0,180);
  servo.write(val);
  sonar();
  delay(58);
 if (distance < Range){
    digitalWrite(13,HIGH);
    stop();
    delay(1000);
    digitalWrite(13,LOW);
    val=map(180,0,180,0,180);
    servo.write(val);
    delay(500);
    sonar();
    delay(58);
    if (distance < Range){
      digitalWrite(13,HIGH);
      delay(1000);
      digitalWrite(13,LOW);
      val=map(0,0,180,0,180);
      servo.write(val);
      delay(500);
      sonar();
     delay(58);
 if(distance >= Range){
      delay(500);
      rightturn();
      delay(rightturndelay);
 }
 else{digitalWrite(13,HIGH);
      delay(500);
      digitalWrite(13,LOW);
      rightturn();
      delay(uturndelay);
    
 }
      }
   else{
      delay(500);
      leftturn();
      delay(leftturndelay);}
 }
 else {forword();
  val=map(83,0,180,0,180);
  servo.write(val);
  Serial.println(distance);}
  delay(58);
}
void stop(){
  digitalWrite(4,LOW);
  analogWrite(5,0);
  analogWrite(6,0);
  digitalWrite(7,HIGH);
  }
void forword(){   ///     8
  digitalWrite(4,LOW);
  analogWrite(5,a);
  analogWrite(6,b);
  digitalWrite(7,HIGH);
  }


void leftturn(){   /// 4
  digitalWrite(4,HIGH);
  analogWrite(5,a);
  analogWrite(6,b);
  digitalWrite(7,HIGH);
  }
void rightturn(){  /// 6
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
