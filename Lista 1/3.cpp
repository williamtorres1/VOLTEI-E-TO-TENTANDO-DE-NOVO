#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*
	A Companhia de Carros Usados Jo�o Honesto paga a seus funcion�rios um sal�rio de R$ 800,00 por m�s mais uma comiss�o de R$ 100,00 por carro vendido
	 e mais 5% do valor total de suas vendas. Calcular o sal�rio total de um vendedor em um dado m�s.
	*/
	int v_fixo=800,carros;
	float comissao,salario_final,vendas;
	printf("Quantos carros foram vendidos este mes?\n");
	scanf("%d",&carros);
	printf("Qual o valor, somado, das vendas mensais?\n");
	scanf("%f",&vendas);
	comissao=(carros*100)+(0.05*vendas);
	salario_final=comissao+v_fixo;
	printf("O salario final do funcionario foi: %f\n",salario_final);
	system("pause");
	return 1;
}
