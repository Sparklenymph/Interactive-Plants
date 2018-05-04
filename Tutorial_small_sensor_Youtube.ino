#include <CapacitiveSensor.h>

CapacitiveSensor cs1 = CapacitiveSensor(6,7);
CapacitiveSensor cs2 = CapacitiveSensor(6,8);
CapacitiveSensor cs3 = CapacitiveSensor(6,9);

boolean cs1g = true;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT); // led

}

void loop() {
  // put your main code here, to run repeatedly:
  long cs1v = cs1.capacitiveSensor(30);
   long cs2v = cs2.capacitiveSensor(30);
    long cs3v = cs3.capacitiveSensor(30);

Serial.println(cs1v);
//  Serial.println(" ");

  if (cs1g){
    if (cs1v > 20){
      Serial.println(cs1v);
      digitalWrite (13, HIGH);
      cs1g = false;
  }
  }

  if(!cs1g){
    if(cs1v < 20){
      Serial.println(cs1v);
      digitalWrite(13, LOW);
      cs1g = true;
    }
  }

  Serial.println(cs1v);
  
delay(5);
  
//if (cs1v > 200)
//  { 
//    digitalWrite (13, HIGH);
//  }
//  else
//  {
//    digitalWrite(13, LOW);
//  }
//
//  
//if (cs2v > 200)
//  {
//    digitalWrite(13, HIGH);
//  }
//  else
//  {
//    digitalWrite(13, LOW);
//  }
//Serial.println(cs1v);
//  
//if (cs3v > 200)
//  {
//    digitalWrite(13, HIGH);
//  }
//  else
//  {
//    digitalWrite(13, LOW);
//  }
//
//  Serial.println(cs2v);
//   delay(100);
}
