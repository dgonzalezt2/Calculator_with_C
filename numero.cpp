#include <iostream>
#include <string>
#include "numero.h"
using namespace std;

Numero::Numero(int valor){
  this->valor=valor;
  setType("Numero");
}  

int Numero::getValor(){
  return this->valor;
}
