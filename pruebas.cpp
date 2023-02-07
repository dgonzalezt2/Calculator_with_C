#include "pruebas.h"
#include "arbol.h"
#include "numero.h"
#include "binario.h"
#include "analizador.h"
#include <iostream>
#include <string>

using namespace std;

void Pruebas::expresion01()
{
  Arbol *expresion[] = {
      new Binario('+',
                  new Binario('-', new Numero(4), new Numero(2)),
                  new Binario('*', new Numero(4), new Numero(36)))};

  Analizador *calculadora = new Analizador();

  cout << calculadora->imprimirTodo(expresion[0]) << endl;
};