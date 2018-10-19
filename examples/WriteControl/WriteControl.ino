#include <Cloudchip.h>

#define WiFi_SSID "xxxxxxxxxx"
#define WiFi_PASSWORD "xxxxxxxxxxxxx"
#define API_KEY "xxxxxxxxxxxxxxxxxxxx"
#define DEVICE_ID "xxxxxxxxxxx"
#define STATUS_LED1 2

Cloudchip cloudchip;

int count;
void setup()
{
  Serial.begin(115200);
  cloudchip.WiFiConfig(WiFi_SSID,WiFi_PASSWORD);
  cloudchip.deviceConfig(API_KEY,DEVICE_ID); 
  cloudchip.init();
}

void loop()
{  
   cloudchip.writeControl(85,250,0,1);

   delay(5000);
}