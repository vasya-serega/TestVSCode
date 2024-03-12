#include <Ethernet.h>

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class ArduinoProxy
{
	public:
        void Init();
        void ExecuteLoop();
    private:
        byte mac[6] = {
            0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED
        };
        IPAddress ip;
        unsigned int localPort = 8888;
        EthernetUDP udp;
};