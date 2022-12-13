#ifndef __THINGSBOARD_CONNECTION_H__
#define __THINGSBOARD_CONNECTION_H__


// #include <ThingsBoard.h>
#include <ESP8266WiFi.h>
#include <ArduinoJson.h>
#include <PubSubClient.h> 

#include "global.h"

#define TOKEN               "nJPiwgmzksNoWXcJHZMc"
#define THINGSBOARD_SERVER  "demo.thingsboard.io"

void TB_Init();
void TB_CheckConnection();
void TB_SendmyData();

#endif