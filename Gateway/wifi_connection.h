#ifndef __INC_WIFI_CONNECTION_H__
#define __INC_WIFI_CONNECTION_H__


#include <ESP8266WiFi.h>
#include <espnow.h>

#include "global.h"
#include "thingsboard_connection.h"

#define WIFI_AP                 "TAN NGOC DANG"
#define WIFI_PASSWORD           "999999999"

#define WIFI_GATEWAY_STA        "GATEWAY"
#define WIFI_GATEWAY_PASS       "123456789"

void WF_Init();
void WF_CheckConnection();


#endif