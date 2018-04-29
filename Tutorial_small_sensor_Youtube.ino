#include <CapacitiveSensor.h>

CapacitiveSensor cs1 = CapacitiveSensor(6,7);
CapacitiveSensor cs2 = CapacitiveSensor(6,8);
CapacitiveSensor cs3 = CapacitiveSensor(6,9);

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
  Serial.println(" ");

  
if (cs1v > 200)
  { 
    digitalWrite (13, HIGH);
  }
  else
  {
    digitalWrite(13, LOW);
  }

  
if (cs2v > 200)
  {
    digitalWrite(13, HIGH);
  }
  else
  {
    digitalWrite(13, LOW);
  }
Serial.println(cs2v);
  
if (cs3v > 200)
  {
    digitalWrite(13, HIGH);
  }
  else
  {
    digitalWrite(13, LOW);
  }

  Serial.println(cs3v);
   delay(15);
}
