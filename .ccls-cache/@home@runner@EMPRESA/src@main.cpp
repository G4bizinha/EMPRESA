sobre#include <iostream>
#include "./Empregado/empregado.hpp"
#include "./Assalariado/assalariado.hpp"
#include "./Comissionado/comissionado.hpp"
#include "./Horista/horista.hpp"
using namespace std;

Assalariado a;
Comissionado c;
Horista h;

int controleMenu =1;
//cria um menu para exibir as informações para fluxo lógico da aplicação

string registerName(){
	string nome;
	cout << "qual o nome do funcionário?";
	cin >> nome;
	return  nome;
}
string registerLastName(){
	string sobrenome;
	cout << "qual o nome do funcionário?";
	cin >> sobrenome;
	return  sobrenome;
}
string registercpf



string RegisterEmployee(){
	string nome , sobrenome, cpf;
	cout << "qual o nome do funcionário?";
	cin >> nome;
	cout << "qual o sobrenome do funcionário?";
	cin >> sobrenome;
	cout << "qual o cpf do seu funcionário?";
	cin >> cpf;
	return nome;
	return sobrenome;
	return cpf;
}


int MenuCalculationSalary(){
	int escolha;
	cout << " ---------------- Menu ------------- \n";
	cout << " 1 - Calcular Assalariado \n";
	cout << " 2 - Calcular Comissionado \n";
	cout << " 3 - Calcular Horista \n";
	cout << " 4 - Sair \n";
	cout << " ------------------------------------- \n";
	cin >> escolha;

	if(escolha >0 & escolha<4){
		return  escolha;
	}else{
		cout << "Digite uma opção valida \n \n";
		return -1;
	}
}

void flowlogicalcalculationsalary(int i){
	switch(i)
	{
		case 1:
			RegisterEmployee();
			a.register_funcionario();
		  a.vencimento();
		break;
    case 2:
			RegisterEmployee();
			c.register_funcionario();
		  c.vencimento();
    break;
    case 3:
			//RegisterEmployee();
			h.register_funcionario(RegisterEmployee());
      h.vencimento();
    break;
		case 4:
			cout << "exiting...";
			exit(1);
		break;
	}
}

int main() {
	do{
		flowlogicalcalculationsalary(MenuCalculationSalary());
	}while(controleMenu==1);
}

