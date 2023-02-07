#include <iostream>
#include <string>
#include "operador.h"

using namespace std;

Operador::Operador(char oper){
    this->oper = oper;
}
char Operador::toString (){
    return oper;
}