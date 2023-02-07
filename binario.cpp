#include <iostream>
#include <string>
#include "binario.h"
#include "arbol.h"
#include "operador.h"

Binario::Binario(char oper, Arbol *izq, Arbol *der){
  this->operador = new Operador(oper);
  this->izq = izq;
  this->der = der;
  setType("Binario");
};

Operador *Binario::getOper(){
  return this->operador;
};

Arbol *Binario::getIzq(){
  return this->izq;
};

Arbol *Binario::getDer(){
  return this->der;
};