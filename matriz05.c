#include<stdio.h>
#define LINHA 4
#define COLUNA 3

int main()
{
	int matriz[LINHA][COLUNA];
	int soma = 0;
	
	for(int l = 0; l < LINHA; l++)
	{
		for(int c = 0; c < COLUNA; c++)
		{
			printf("Informe os numeros: ");
			scanf("%d",&matriz[l][c]);
		}
	}
	for(int l = 0; l < LINHA; l++)
	{
		for(int c = 0; c < COLUNA; c++)
		{
			printf("%d ",matriz[l][c]);
		}
		printf("\n");
	}
	for(int c = 0; c < COLUNA; c++)
	{
		for(int l = 0; l < LINHA; l++)
		{
			soma += matriz[l][c];
		}
		printf("%d COLUNA:%d\n",c,soma);
		soma = 0;
	}
	return(0);
}