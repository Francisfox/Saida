#ifndef _SAIDA_
#define _SAIDA_

#include "Arduino.h"
class Saida{
  private:
    byte _pin;
    int _tempo = 500;
    boolean _estado = false;
    unsigned long int _tempoAnterior = 0;
  public:
    Saida(int pin);
    void test_Saida();
    void ON();
    void OFF();   
};
#endif