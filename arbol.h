#include <iostream>
#include <string>

#pragma once

using namespace std;

class Arbol{
  private:
    string type;
  public:
    string getType();
    void setType(string type);
};