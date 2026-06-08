#include <stdio.h>

int main()
{
	char nome = 0;
	double salario = 0.0;
	double vendas = 0.0;
	double total = 0.0;
	
	scanf("%c",&nome);
	scanf("%lf"&salario);
	scanf("%lf",&vendas);
	
	total = (vendas/0.15)+salario;
	printf("TOTAL = R$ %.2lf\n",total);
	
	return (0);
}