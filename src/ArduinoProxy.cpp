#include "ArduinoProxy.h"
#include <Ethernet.h>
#include <EthernetUdp.h>

void ArduinoProxy::Init()
{
    Ethernet.init(10);

    ip = IPAddress(192, 168, 88, 100);
    Ethernet.begin(mac, ip);   

    if (Ethernet.hardwareStatus() == EthernetNoHardware) {
        Serial.println("Ethernet shield was not found.  Sorry, can't run without hardware. :(");
    }

    if (Ethernet.linkStatus() == LinkOFF) {
        Serial.println("Ethernet cable is not connected.");
    }

    udp.begin(localPort); 
}

void ArduinoProxy::ExecuteLoop()
{}