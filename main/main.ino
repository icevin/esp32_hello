#include <WiFi.h>
#include "secrets.h"

const char* ssid     = SECRET_SSID;
const char* password = SECRET_PW;

void setup()
{
    Serial.begin(115200);
    delay(10);

    Serial.println(ssid);

    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED) {
        delay(1000);
        Serial.print(".");
    }

    Serial.println("\n\n");
    Serial.println("Connected - local IP: ");
    Serial.println(WiFi.localIP());
}

void loop()
{
   Serial.println("Hello World");
   delay(2000);
}
