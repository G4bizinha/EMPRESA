#include "assalariado.hpp"


double Assalariado::vencimento(){
	double salario , resultado , inss , impostorenda;
	cout << "Qual é o seu salario?";
	cin >> salario;

	/*
 imposto de renda
	- Alíquota:
  > taxa percentual de acordo com a base selarial:
> Até R$ 1.903,98	0,0%	
> De R$ 1.903,99 até R$ 2.826,65	7,5%	R$ 142,80 
> De R$ 2.826,66 ate R$ 3.751,05	15,0%	R$ 354,80
> De R$ 3.751,06 até R$ 4.664,68	22,5%	R$ 636,13
*/

	//Imposto de renda
	if(salario <= 1903.98){
		//salario - 0;
	}else if(salario > 1903.98 && salario < 2826.66){
		impostorenda = salario - (salario * 0.7.5);

	}


	



/*
# tabela Alícota INSS
> até R$ 1.751,81 - Alíqota 8,00%
>  R$ 1.751,82 até 2.919,72 9,00%
> R$ 2.919,73 até R$ 5.839,45 - Alíqota 11,00%
*/

	//Alícota INSS
	if(salario <= 1751.81){
		inss = salario - (salario * 0.8);
	}else if( salario > 1751.81 && salario < 2919.73){
		inss = salario - (salario * 0.9);
	}else if(salario > 3751.05 && salario < 5839.45){
		inss = salario - (salario * 0.9);
	}

	resultado = salario - inss - impostorenda;

}

