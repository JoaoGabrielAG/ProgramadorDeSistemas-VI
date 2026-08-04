#include<stdio.h>
#define T 5

int main()
{
	int matriz[T][T];
	int num;
	int encontrou;
	
	for(int l = 0; l < T; l++)
	{
		for(int c = 0; c < T; c++)
		{
			printf("Informe um numero: ");
			scanf("%d",&matriz[l][c]);
		}
	}
	for(int l = 0; l < T; l++)
	{
		for(int c = 0; c < T; c++)
		{
			printf("%d ",matriz[l][c]);
		}
		printf("\n");
	}
	printf("Verifique existencia de um numero na matriz: ");
	scanf("%d",&num);
	printf("\n");
	for(int l = 0; l < T; l++)
	{
		for(int c = 0; c < T; c++)
		{
			if(matriz[l][c] == num)
			{
				printf("Numero na LINHA: %d e COLUNA: %d\n",l,c);
				encontrou = 1;
			}
		}
	}
	if(encontrou == 0)
	{
		printf("Nao existe esse numero na matriz");
	}
	return(0);
}