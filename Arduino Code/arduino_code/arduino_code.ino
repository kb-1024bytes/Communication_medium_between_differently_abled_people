#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

#define SERVOMIN  150 
#define SERVOMAX  600 


uint8_t servonum = 0;
char inp;
void setup() {
  Serial.begin(9600);
  Serial.println("8 channel Servo test!");

  pwm.begin();
  
  pwm.setPWMFreq(60);

  delay(10);
}

void setServoPulse(uint8_t n, double pulse) {
  double pulselength;
  
  pulselength = 1000000;
  pulselength /= 60;
  Serial.print(pulselength); 
  Serial.println(" us per period"); 
  pulselength /= 4096;
  Serial.print(pulselength);
  Serial.println(" us per bit"); 
  pulse *= 1000000;
  pulse /= pulselength;
  Serial.println(pulse);
  pwm.setPWM(n, 0, pulse);
}

void loop() {
  if(Serial.available()>0)
  {
    inp = Serial.read();
    char ch = (char)inp; 
  
    switch(ch){
        case 'a':
        case 'A':
          servonum = 1;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          
          delay(2000);
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
        break;
     /*-------------------------------------------------------------------*/
        case 'b':
        case 'B':
          servonum = 1;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 3;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          
          delay(2000);
          
          servonum = 1;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 3;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          break;
      /*-------------------------------------------------------------------*/ 
      
        case 'c':
        case 'C':
          servonum = 1;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 2;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          
          delay(2000);
          
          servonum = 1;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 2;
          
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          break;
      /*-------------------------------------------------------------------*/ 
            
          
        case 'd':
        case 'D':
          servonum = 1;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 2;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 4;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          
          delay(2000);
          
          servonum = 1;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 2;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 4;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          break;
      /*-------------------------------------------------------------------*/ 
          
        case 'e':
        case 'E':
          servonum = 1;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 4;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          
          delay(2000);
          
          servonum = 1;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 4;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          break;
      /*-------------------------------------------------------------------*/ 
          
        case 'f':
        case 'F':
          servonum = 1;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 2;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 3;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          
          delay(2000);
          
          servonum = 1;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 2;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 3;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          break;
      /*-------------------------------------------------------------------*/ 
          
        case 'g':
        case 'G':
          servonum = 1;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 2;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 3;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 4;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          
          delay(2000);
          
          servonum = 1;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 2;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 3;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 4;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          break;
      /*-------------------------------------------------------------------*/ 
  
        case 'h':
        case 'H':
          servonum = 1;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 3;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 4;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          
          delay(2000);
          
          servonum = 1;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 3;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 4;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          break;
      /*-------------------------------------------------------------------*/ 
        case 'i':
        case 'I':
         servonum = 2;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 3;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMIN; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          
          delay(2000);
          
          servonum = 2;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 3;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          break;
      /*-------------------------------------------------------------------*/ 
  
        case 'j':
        case 'J':
         servonum = 2;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 3;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 4;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          
          delay(2000);
          
          servonum = 2;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 3;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 4;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          break;
      /*-------------------------------------------------------------------*/ 
        case 'k':
        case 'K':
          servonum = 1;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 5;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          
          delay(2000);
          
          servonum = 1;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 5;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          break;
      /*-------------------------------------------------------------------*/ 
  
        case 'l':
        case 'L':
         servonum = 1;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 3;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 5;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          
          delay(2000);
          
          servonum = 1;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 3;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 5;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          break;
      /*-------------------------------------------------------------------*/ 
  
        case 'm':
        case 'M':
          servonum = 1;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 2;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 5;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          
          delay(2000);
          
          servonum = 1;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 2;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 5;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          break;
      /*-------------------------------------------------------------------*/ 
  
        case 'n':
        case 'N':
          servonum = 1;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 2;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 4;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 5;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          
          delay(2000);
          
          servonum = 1;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 2;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 4;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 5;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          break;
      /*-------------------------------------------------------------------*/ 
  
        case 'o':
        case 'O':
          servonum = 1;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 4;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 5;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          
          delay(2000);
          
          servonum = 1;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 4;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 5;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          
          break;
      /*-------------------------------------------------------------------*/ 
  
        case 'p':
        case 'P':
         servonum = 1;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 2;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 3;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 5;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          
          delay(2000);
          
          servonum = 1;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 2;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 3;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 5;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          break;
      /*-------------------------------------------------------------------*/ 
  
  
        case 'q':
        case 'Q':
          servonum = 1;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 2;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 3;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 4;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 5;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          delay(2000);
          
          servonum = 1;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 2;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 3;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 4;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 5;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          break;
      /*-------------------------------------------------------------------*/ 
  
  
        case 'r':
        case 'R':
          servonum = 1;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 3;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 4;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 5;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          delay(2000);
          
          servonum = 1;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 3;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 4;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 5;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          break;
      /*-------------------------------------------------------------------*/ 
        case 's':
        case 'S':
          servonum = 2;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 3;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 5;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          delay(2000);
          
          servonum = 2;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 3;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 5;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          break;
      /*-------------------------------------------------------------------*/ 
        case 't':
        case 'T':        
          servonum = 2;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 3;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 4;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 5;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          delay(2000);
          
          servonum = 2;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 3;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 4;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 5;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          break;
      /*-------------------------------------------------------------------*/ 
        case 'u':
        case 'U':
          servonum = 1;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          
          servonum = 5;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 6;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          delay(2000);
          
          servonum = 1;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 5;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 6;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          break;
      /*-------------------------------------------------------------------*/ 
        case 'v':
        case 'V':
          servonum = 1;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 3;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 5;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 6;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          delay(2000);
          
          servonum = 1;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 3;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 5;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 6;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          break;
      /*-------------------------------------------------------------------*/ 
        case 'w':
        case 'W':
          servonum = 2;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 3;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 4;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 6;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          delay(2000);
          
          servonum = 2;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 3;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 4;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 6;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          break;
      /*-------------------------------------------------------------------*/ 
        case 'x':
        case 'X':
          servonum = 1;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 2;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 5;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 6;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          delay(2000);
          
          servonum = 1;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 2;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 5;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 6;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          break;
      /*-------------------------------------------------------------------*/ 
        case 'y':
        case 'Y':
          servonum = 1;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 2;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 4;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 5;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 6;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          delay(2000);
          
          servonum = 1;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 2;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 4;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 5;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 6;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          break;
      /*-------------------------------------------------------------------*/ 
  
  
        case 'z':
        case 'Z':
          servonum = 1;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 4;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 5;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 6;
          for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          
          delay(2000);
          
          servonum = 1;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 4;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 5;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          servonum = 6;
          for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
            pwm.setPWM(servonum, 0, pulselen);
          }
          break;
      /*-------------------------------------------------------------------*/ 
      }
  }
    delay(1000);
     servonum = 1;
      for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
        pwm.setPWM(servonum, 0, pulselen);
      }
      servonum = 2;
      for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
        pwm.setPWM(servonum, 0, pulselen);
      }
      servonum = 3;
      for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
        pwm.setPWM(servonum, 0, pulselen);
      }
      servonum = 4;
      for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
        pwm.setPWM(servonum, 0, pulselen);
      }
      servonum = 5;
      for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
        pwm.setPWM(servonum, 0, pulselen);
      }
      servonum = 6;
      for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
        pwm.setPWM(servonum, 0, pulselen);
      }
      delay(2000);
}
