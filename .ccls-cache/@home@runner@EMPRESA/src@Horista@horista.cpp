 #include "horista.hpp"

double Horista::vencimento(){
	double totaldehoras , precohora , salario;
	cout << "Qual é o seu total de horas mensais trabalhadas ?";
  cin >> totaldehoras;
	cout << "Qual é o custo da sua hora trabalhada ?";
	cin >> precohora;

  salario = (totaldehoras*precohora);

	cout << "o salario mensal de " << nome << " " << sobrenome << " é de R$: " << salario << endl << endl;
	return salario;
}