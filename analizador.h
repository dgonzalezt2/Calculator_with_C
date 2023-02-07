#include <iostream>
#include <string>
#pragma once
#include "arbol.h"
using namespace std;

class Analizador{
  private:
  public:
    int evaluar(Arbol *raiz);
    string imprimir(Arbol *raiz);
    string imprimirTodo(Arbol *exp);
};