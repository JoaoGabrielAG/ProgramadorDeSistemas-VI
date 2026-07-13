#include <stdio.h>

int main()
{
	int horas = 0, km_h = 0;
	float gasto = 0.0, combustivel = 12.0;
	
	scanf("%d\n%d",&horas,&km_h);
	
	gasto = (horas*km_h)/combustivel;
	
	printf("%.3f\n",gasto);
	return(0);
}