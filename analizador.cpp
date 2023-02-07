#include "analizador.h"
#include "arbol.h"
#include "numero.h"
#include "binario.h"

#include <iostream>
#include <string>

using namespace std;

int Analizador::evaluar(Arbol *raiz)
{
  int res = 0;

  if (raiz==NULL)
  {
    return res;
  }
  else
  {
    if (raiz->getType() == "Numero")
    {
      Numero *n = (Numero *)raiz;
      res = n->getValor();
      
    }
    else
    {
      Binario *operador = (Binario *)raiz;
      switch(operador->getOper()->toString()){
        case '+':
          res = evaluar(operador->getIzq()) + evaluar(operador->getDer());
          break;
        case '-':
           res = evaluar(operador->getIzq()) - evaluar(operador->getDer());
           break;
        case '*':
          res = evaluar(operador->getIzq()) * evaluar(operador->getDer());
          break;
        case '/':
          res = evaluar(operador->getIzq()) / evaluar(operador->getDer());
          break;
      }
    }
  }
  return res;
} //fin del metodo

//============================================
string Analizador ::imprimir(Arbol *raiz)
{
  string ecuacion;
  if (raiz == NULL)
  {
    //return "Sin ecuación";
  }
  else
  {
    if (raiz->getType() == "Numero")
    {
      Numero *n = (Numero *)raiz;
      ecuacion = to_string(n->getValor());
    }
    else
    {
      Binario *operador = (Binario *)raiz;
      ecuacion = ecuacion + "(";
      ecuacion += imprimir(operador->getIzq());
      ecuacion += operador->getOper()->toString();
      ecuacion += imprimir(operador->getDer());
      ecuacion += ")";
    }
  }
  return ecuacion;
}

string Analizador::imprimirTodo(Arbol *exp)
{
  string retorno = imprimir(exp);
  retorno += "=";
  retorno += to_string (evaluar(exp));
  return retorno;
}