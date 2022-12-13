#ifndef __GLOBAL_H__
#define __GLOBAL_H__


// #include <ThingsBoard.h>
#include <ESP8266WiFi.h>
#include <ArduinoJson.h>

#include <PubSubClient.h> 
#include <espnow.h>

// Structure example to send data
// Must match the receiver structure
typedef struct struct_message {
  int sensor_node_id;
  float humi;
  float temp;
} struct_message;


// Initialize ThingsBoard client
extern WiFiClient espClient;

// Create a struct_message called myData
extern struct_message myData; 

extern String cmd;

// REPLACE WITH THE MAC Address of your receiver 
extern uint8_t broadcastAddress[];
#endif