#include "empregado.hpp"

  void Empregado::register_funcionario(string nome, string sobrenome , string cpf){
    this->nome=nome;
		this->sobrenome=sobrenome;
		this->cpf=cpf;
  }

  string Empregado::get_funcionario(){
    return nome;
		return sobrenome;
		return cpf;
  }

 