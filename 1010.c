#include <stdio.h>

int main ()
{
	int modelo = 0;
	int modelo_2 = 0;
	int peça = 0;
	int peça_2 = 0;
	float preço = 0.0;
	float preço_2 = 0.0;
	float total = 0.0;
	
	scanf("%d%lf%lf",&modelo,&peça,&preço);
	scanf("%d%lf%lf",&modelo_2,&peça_2,&preço_2);
	
	total = (peça*preço) + (peça_2*preço_2)
	printf("VALOR A PAGAR: R$ %f\n",total);
	
	return(0);
}