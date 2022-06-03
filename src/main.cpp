#include <iostream>
#include "Empregado/empregado.hpp"
#include "Assalariado/assalariado.hpp"
#include "Comissionado/comissionado.hpp"
#include "Horista/horista.hpp"
using namespace std;
int main() {

  Assalariado a;
    a.vencimento();

  Comissionado c;
    c.vencimento();

  Horista h;
    h.vencimento();
  }

