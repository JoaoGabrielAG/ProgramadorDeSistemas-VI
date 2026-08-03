#include<stdio.h>
#define LINHA 3
#define COLUNA 4

int main()
{
	int matriz[LINHA][COLUNA];
	int l,c;
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
	printf("\n");
	for(int l = 0; l < LINHA; l++)
	{
		for(int c = 0; c < COLUNA; c++)
		{
			soma += matriz[l][c];
		}
		printf("%d LINHA:%d\n",l,soma);
		soma = 0;
	}
	return(0);
}