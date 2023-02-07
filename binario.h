#include <iostream>
#include <string>
#include "arbol.h"
#include "operador.h"
#pragma once

using namespace std;

class Binario : public Arbol{
  private:
    Operador *operador;
    Arbol *izq;
    Arbol *der;
  public:
    Binario(char oper, Arbol *izq, Arbol *der);
    Operador *getOper();
    Arbol *getIzq();
    Arbol *getDer();
};