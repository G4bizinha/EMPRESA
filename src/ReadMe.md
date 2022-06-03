# Sistema de Calculo de salario baseado na categoria de trabalho

# Fluxo do sistema:
 - o sistema deve fazer o calculo do salario com base no tipo de contrtação e categoria de emprego, de acordo com a categoria do emprego o sistema deve perguntar infomações de acordo com essa categoria para fazer o calculo do salario do mesmo

# Calcular salario
- Virtual
> CalcularSalario() = 0;

# Empregado
- Publico
>  Nome: String , SobreNome: String, cpf: String
- protected
> Vencimento() double

# Assalariado
- Publico
> Salario: double
- protected
> Vencimento() double

+ Base de calculo
  >recebe como base o salario em cima do salario calcula o Alíquota e as deduções

# imposto de renda
	- Alíquota:
  > taxa percentual de acordo com a base selarial:
> Até R$ 1.903,98	0,0%	
> De R$ 1.903,99 até R$ 2.826,65	7,5%	R$ 142,80 
> De R$ 2.826,66 ate R$ 3.751,05	15,0%	R$ 354,80
> De R$ 3.751,06 até R$ 4.664,68	22,5%	R$ 636,13

# tabela Alícota INSS
> até R$ 1.751,81 - Alíqota 8,00%
>  R$ 1.751,82 até 2.919,72 9,00%
> R$ 2.919,73 até R$ 5.839,45 - Alíqota 11,00%


# Comissionado
- public
> totalVenda: double
> taxaComissao: double
- protected
> Vencimento() double

# Horista
- public
> precoHora: double
> horasTrabalhadas: double
- protected
> Vencimento() double

<br/>

Sistema desenvolvido com muito ❤️☕ por  [Gabriela Von](https://github.com/G4bizinha) & [Geordani Machado](https://github.com/Geordani-Machado) 

  "Não é gambiarra, é uma solução alternativa não oficial." by Gabriela&Geordani



