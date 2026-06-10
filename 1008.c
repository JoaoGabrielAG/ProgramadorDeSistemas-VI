#include <stdio.h>

int main ()
{
	int num = 0;
	int quant = 0;
	float valor = 0.0;
	float salary = 0.0;
	
	scanf("%d",&num);
	scanf("%d",&quant);
	scanf("%f",&valor);
	
	salary = quant*valor;
	
	printf("NUMBER = %d\n",num);
 	printf("SALARY = U$ %.2f\n",salary);
	
	return(0);
}