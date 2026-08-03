#include<stdio.h>
#define TAM 3

int main()
{
	int matriz[TAM][TAM];
	int l,c;
	
	for(int l = 0; l < TAM; l++)
	{
		for(int c = 0; c < TAM; c++)
		{
			printf("Escolha um numero para a matriz: ");
			scanf("%d",&matriz[l][c]);
		}
	}
	for(int l = 0; l < TAM; l++)
	{
		for(int c = 0; c < TAM; c++)
		{
			printf("%d ",matriz[l][c]);
		}
		printf("\n");
	}
	
	return(0);
}