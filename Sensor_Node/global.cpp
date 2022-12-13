#include "global.h"


WiFiClient espClient = WiFiClient();
PubSubClient client(espClient);

struct_message myData = {2, 0, 0};

uint8_t broadcastAddress[] = {0x3C, 0x61, 0x05, 0xD0, 0x8F, 0xD2};

String cmd;
