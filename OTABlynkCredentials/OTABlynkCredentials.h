/*!
 * file OTABlynkCredentials.h
 *
 * This code is made for entering WiFi and Blynk Credentials
 * Over the Air using your web browser.
 * 
 *
 * Written by Sachin Soni for techiesms YouTube channel, with
 * contributions from the open source community.
 *
 *Visit our channel for more interesting projects
 *https://www.youtube.com/techiesms
 *
 */



#ifdef ESP8266
#include <ESP8266WiFi.h>
#elif defined(ESP32)
#include <WiFi.h>
#else
#error "Board not found"
#endif

#include "Arduino.h"

//
//
//  Install these all libraries to make the project work.
//
//
#include <ESPAsyncWebServer.h>
#include <WebSocketsServer.h>
#include <ArduinoJson.h>
#include <EEPROM.h>


class credentials {
  public:
  bool credentials_get();
  void setupAP(char* softap_ssid, char* softap_pass);
  void server_loops();
  String EEPROM_Config();
  void Erase_eeprom();
  private:
  bool _testWifi(void);
  void _launchWeb(void);
  void _createWebServer(void);
  String ssid = "";
  String pass = "";
};
