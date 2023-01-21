
#define BLYNK_TEMPLATE_ID "TMPLR0p7eU37"
#define BLYNK_DEVICE_NAME "led6"
#define BLYNK_AUTH_TOKEN "kJf8FLOGdevIoCjJjJ0RUhMv8o1qWEtq"
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[]=BLYNK_AUTH_TOKEN;
char ssid[]="V2036";
char pass[]="9844414952";

BLYNK_WRITE(V1)
{
digitalWrite(D0,param.asInt());
}
BLYNK_WRITE(V2)
{
digitalWrite(D1,param.asInt());
}

void setup() 
{
  Serial.begin(115200);
  pinMode(D0,OUTPUT);
  pinMode(D1,OUTPUT);
  Blynk.begin(auth,ssid,pass);
}

void loop()
{
  Blynk.run();
}
