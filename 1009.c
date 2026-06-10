#include <stdio.h>

int main()
{
	char nome[25];
	double salario = 0.0;
	double vendas = 0.0;
	double valor_final = 0.0;
	
	scanf("%s",nome);
	scanf("%lf",&salario);
	scanf("%lf",&vendas);
	
	valor_final = salario + (0.15*vendas);
	printf("TOTAL = R$ %.2lf\n",valor_final);
	
	return(0);
}