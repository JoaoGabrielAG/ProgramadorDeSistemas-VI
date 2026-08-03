#include<stdio.h>
#define TAM 4

int main()
{
	int matriz[TAM][TAM];
	int l,c;
	int a = 0;
	
	for(int l = 0; l < TAM; l++)
	{
		for(int c = 0; c < TAM; c++)
		{
			printf("Informe os numeros da matriz: ");
			scanf("%d",&matriz[l][c]);
			a = a + matriz[l][c];
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
	printf("%d",a);
	return(0);
}