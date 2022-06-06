#include "assalariado.hpp"


double Assalariado::vencimento(){
	double salario , resultado , inss , impostorenda , debito;
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
> Acima de R$ 4.664,68 27% R$ 869,36
*/

	//Imposto de renda
	if(salario <= 1903.98){
		//salario - 0;
	}else if(salario > 1903.98 && salario < 2826.66){
		impostorenda = salario - (salario * 0.7);
		debito = salario - 142.80;
		
	}else if(salario > 2826.65 && salario < 3751.06){
		impostorenda = salario - (salario * 0.15);
		debito = salario - 354.80;
		
	}else if(salario > 3751.05 && salario < 4664.67){
		impostorenda = salario - (salario * 0.22);
		debito = salario - 636.13;
		
	}else{
		impostorenda = salario - (salario * 0.27);
	}

/*2022
Salário de contribuição	Alíquota
Até R$ 1.212,00	7,5%
De R$ 1.212,01 a R$ 2.427,35	9%
De R$ 2.427,36 a R$ 3.641,03	12%
De R$ 3.641,04 a R$ 7.087,22	14%

*/

	//Alícota INSS
	if(salario <= 1212.00){
		inss = salario - (salario * 0.8);
	}else if( salario > 1212.00 && salario < 2427.36){
		inss = salario - (salario * 0.9);
	}else if(salario > 2427.35 && salario < 3641.04){
		inss = salario - (salario * 0.12);
	}else if(salario > 3641.03 && salario < 7087.23){
		inss = salario - (salario * 0.14);
	}else{
		inss = salario - (salario * 0.14);
	}

	resultado = salario - inss - impostorenda - debito;

	cout << " o salario dessa pessoa é de aproximadamente: R$" << resultado << endl;

	return resultado;

}

