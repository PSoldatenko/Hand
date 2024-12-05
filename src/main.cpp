#include <Arduino.h>
#include <ESP32Servo.h>

/*0 - большой палец
  1 - указательный палец
  2 - средний палец
  3 - безымянный палец
  4 - мизинец
  pin 21 - большой палец
  pin 19 - указательный палец
  pin 18 - средний палец
  pin 5 - безымянный палец
  pin 17 - мизинец
  0 - полностью разогнут
  180 - полностью согнут*/
  
Servo  finger[5];
void setup() {
  int ports[5] = {21, 19, 18, 5, 17};
  for (int i=0; i<5; i++){
    finger[i].attach(ports[i]);
  }
  
}
void finger_init(){
for (int i=0; i<5; i++){
    finger[i].write(0);
    delay(500);
  }
  for (int i=4; i<=0;i--){
    finger[i].write(180);
    delay(500);
  }
}
void one(){
  for (int i=0; i<=5; i++){
    finger[i].write(180);
    delay(500);
  }
    finger[0].write(180);
    delay(500);
    finger[1].write(0);
    delay(500);
    finger[2].write(180);
    delay(500);
    finger[3].write(180);
    delay(500);
    finger[4].write(180);
    delay(500);
  }
  void two(){
    for (int i=0; i<=5; i++){
    finger[i].write(180);
    delay(500);
  }
    finger[0].write(180);
    delay(500);
    finger[1].write(0);
    delay(500);
    finger[2].write(0);
    delay(500);
    finger[3].write(180);
    delay(500);
    finger[4].write(180);
    delay(500);
  }
  void three(){
    for (int i=0; i<=5; i++){
    finger[i].write(180);
    delay(500);
  }
    finger[0].write(180);
    delay(500);
    finger[1].write(0);
    delay(500);
    finger[2].write(0);
    delay(500);
    finger[3].write(0);
    delay(500);
    finger[4].write(180);
    delay(500);
  }void four(){
    for (int i=0; i<=5; i++){
    finger[i].write(180);
    delay(500);
  }
    finger[0].write(180);
    delay(500);
    finger[1].write(0);
    delay(500);
    finger[2].write(0);
    delay(500);
    finger[3].write(0);
    delay(500);
    finger[4].write(0);
    delay(500);
  }void five(){
    for (int i=0; i<=5; i++){
    finger[i].write(180);
    delay(500);
  }
    finger[0].write(0);
    delay(500);
    finger[1].write(0);
    delay(500);
    finger[2].write(0);
    delay(500);
    finger[3].write(0);
    delay(500);
    finger[4].write(0);
    delay(500);
  }
void loop() {
  Serial.begin(9600);
	Serial.println("Servo is ready");
  finger_init();
  delay(500);
  one();
  delay(500);
  two();
  delay(500);
  three();
  delay(500);
  four();
  delay(500);
  five();
  delay(500);
}
