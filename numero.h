#include <iostream>
#include <string>
#pragma once
#include "arbol.h"

using namespace std;

class Numero : public Arbol{
  private:
    int valor;
  public:
    Numero (int valor);

    int getValor();
};