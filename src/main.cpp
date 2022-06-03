#include <iostream>
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
int Menu(){
	int escolha;
	cout << " ---------------- Menu ------------- \n";
	cout << " 1 - Ver Assalariado \n";
	cout << " 2 - Ver Comissionado \n";
	cout << " 3 - Ver Horista \n";
	cout << " ------------------------------------- \n";
	cin >> escolha;

	if(escolha >0 & escolha<4){
		return  escolha;
	}else{
		cout << "Digite uma opção valida \n \n";
		return -1;
	}
}

void fluxoLogico(int i){
	switch(i)
	{
		case 1:
		  a.vencimento();
		break;
		
    case 2:
		  c.vencimento();
    break;
		
    case 3:
      h.vencimento();
    break;
	}
}

int main() {
	do{
		fluxoLogico(Menu());
	}while(controleMenu==1);
}

