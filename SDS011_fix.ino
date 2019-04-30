// SDS011 dust sensor example
// -----------------------------
//
// By R. Zschiegner (rz@madavi.de).
// April 2016
#include <SoftwareSerial.h>
//#include "src/SDS011/SDS011.h"

SoftwareSerial test(6,5);

//float p10, p25;
//int err;

//SDS011 my_sds;

void setup() {
  //my_sds.begin(6, 5);
  test.begin(9600);
  
	Serial.begin(115200);
}

void loop() {
//	err = my_sds.read(&p25, &p10);
//  
//	if (!err) {
//		Serial.println("P2.5: " + String(p25));
//		Serial.println("P10:  " + String(p10));
//	}
//	delay(100);

  while(test.available()> 0){
    Serial.print("0x"); Serial.println(test.read(), HEX);
  }
  Serial.println("===");
  delay(1000);
}
