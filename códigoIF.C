#include <stdio.h>

int main()
{
	int num = 0;
	printf("Informe um numero inteiro\n");
	scanf("%d",&num);
	if(num > 5)
	{
		printf("O numero digitado e maior que 5\n");
	}
	else
	{
		printf("Nao e maior\n");
	}
	return(0);
}