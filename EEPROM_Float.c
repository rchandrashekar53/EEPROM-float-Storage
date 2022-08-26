/**
 * @author - rahul Chandrashekar
 */


#include <EEPROM.h>

int addr = 0;
int addr_1 = 4; // ensure that atleast 4 block allocatation for a float variable
int addr_2 = 8; // ensure that atleast 4 block allocatation for a float variable

void setup() {
  Serial.begin(19200);
  EEPROM.begin(512);
}

void loop() {
  float temp_1 = 40.2;
  float power = 6.9;
  float tewmp_2 = 20.2;

  EEPROM.put(addr, temp_1);
  EEPROM.put(addr_1, power);
  EEPROM.put(addr_2, tewmp_2);
  
  EEPROM.commit(); // commit data

  
  float value;
  float value1;
  float value2;

  EEPROM.get(addr,value);
  EEPROM.get(addr1,value1);
  EEPROM.get(addr2,value2);
      
 Serial.println(value);
 Serial.println(value1);
 Serial.println(value2);
  
 delay(100);
}
