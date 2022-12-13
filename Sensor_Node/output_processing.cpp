#include "output_processing.h"

void OUT_Init(){
  pinMode(HUMI_RELAY_PIN, OUTPUT);
  pinMode(TEMP_RELAY_PIN, OUTPUT);

  digitalWrite(HUMI_RELAY_PIN, 0);
  digitalWrite(TEMP_RELAY_PIN, 0);
}

void OUT_Controller(){
    if(cmd == "ON_RELAY_HUMI"){
      digitalWrite(HUMI_RELAY_PIN, 1);
    }
    else if(cmd == "OFF_RELAY_HUMI"){
      digitalWrite(HUMI_RELAY_PIN, 0);
    }
    else if(cmd == "ON_RELAY_TEMP"){
      digitalWrite(TEMP_RELAY_PIN, 1);
    }
    else if(cmd == "OFF_RELAY_TEMP"){
      digitalWrite(TEMP_RELAY_PIN, 0); 
    }
    else {
      digitalWrite(HUMI_RELAY_PIN, 0);
      digitalWrite(TEMP_RELAY_PIN, 0);
    }

  
}