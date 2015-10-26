/*
Author: Vadim Radu
Date: 26/10/2015

Credits:

*/
// Date and time functions using a DS1307 RTC connected via I2C and Wire lib
//Display functions using MAX7219 
 
#include <Wire.h>
#include "RTClib.h"
#include "LedControl.h"

//constants
#define CLK
#define DATA
#define LATCH
#define DEV_NR

//component declarations 
RTC_DS1307 RTC;
LedControl lc=LedControl(CLK, DATA, LATCH, DEV_NR);

void setup() {
   Serial.begin(115200);
   Wire.begin();
   RTC.begin();
   lc.shutdown(0,false);
   lc.setIntensity(0,1);
   lc.clearDisplay(0);
   
 //debug purpose
  if (! RTC.isrunning()) {
    Serial.println("RTC is NOT running!");
    RTC.adjust(DateTime(__DATE__, __TIME__)); // sets the RTC to the date & time this sketch was compiled
  }
 
  
  
  
}

void printNumber(int v, ) {
    int ones;
    int tens;
    
    ones=v%10;
    v=v/10;
    tens=v%10;
    	
    //Now print the number digit by digit
    lc.setDigit(0,2,(byte)hundreds,false);
    lc.setDigit(0,1,(byte)tens,false);
    lc.setDigit(0,0,(byte)ones,false);
}

void loop() { 
   DateTime now = RTC.now();
 
 
 
 //debbuging purpose
    Serial.print(now.year(), DEC);      Serial.print('/');
    Serial.print(now.month(), DEC);     Serial.print('/');
    Serial.print(now.day(), DEC);       Serial.print(' ');
    Serial.print(now.hour(), DEC);      Serial.print(':');
    Serial.print(now.minute(), DEC);    Serial.print(':');
    Serial.print(now.second(), DEC);    Serial.println();
 
}
