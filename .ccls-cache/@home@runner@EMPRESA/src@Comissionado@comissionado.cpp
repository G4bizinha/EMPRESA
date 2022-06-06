#include "comissionado.hpp"

double Comissionado::vencimento(){
	double totalVenda , taxaComissao , salario;
	cout << " qual é o total das suas vendas?";
	cin >> totalVenda;
	cout << " qual a sua taxa de comissão por venda ?";
	cin >> taxaComissao;

	salario = (taxaComissao * totalVenda);

	cout << " O salario mensal de " << nome << " " << sobrenome << " " <<  " é de R$: " << salario << endl << endl;
	return salario;
}

