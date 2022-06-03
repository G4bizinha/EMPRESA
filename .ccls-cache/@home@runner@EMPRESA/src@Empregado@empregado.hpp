#include <iostream>
using namespace std;

  class Empregado {

  public:
		void set_nome(string n);
    void set_sobrenome(string s);
    void set_cpf(string c);
		string get_nome();
		string get_sobrenome();
		string get_cpf();

  virtual double vencimento()=0;
  
  protected:
    string nome;
    string sobrenome;
    string cpf;
  };