#include <iostream>
#include "arbol.h"
#include <string>

using namespace std;

string Arbol::getType(){
    return this->type;
}

void Arbol::setType(string type){
    this->type = type;
}

