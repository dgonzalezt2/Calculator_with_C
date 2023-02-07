#include "numero.h"
#include <iostream>
#include <string>

#pragma once

class Operador
{
private:
  char oper;
public:
  Operador(char);
  char toString();
};