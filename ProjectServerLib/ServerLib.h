#ifndef ServerLib_h
#define ServerLib_h

#include "Arduino.h"
#include "SoftwareSerial.h"

class ServerLib {
  public:
    //ServerLib(int rx, int tx, String naam, String game);
    ServerLib(SoftwareSerial& serial, String naam, String game);
    void updateLoop();
    void setReadyState(bool state);
    bool hasGameStarted();
    bool isConnected();
    void scorePoint();
  private:
    String _naam;
    String _game;
    SoftwareSerial& _bt;
    bool _ready;
    bool _started;
    bool _connected;
    long _lastPing;
};

#endif