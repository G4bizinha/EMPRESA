#include <iostream>
using namespace std;
#ifndef EMPREGADO_H
#define EMPREGADO_H

  class Empregado {

  public:
		void register_funcionario(string nome, string sobrenome , string cpf);
		string get_funcionario();

  virtual double vencimento()=0;
  
  protected:
    string nome;
    string sobrenome;
    string cpf;
  };
#endif