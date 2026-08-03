#include<stdio.h>
#define TAM 5

int main()
{
	int matriz[TAM][TAM];
	int l, c;
	int i, j, o, k;
	int maior = -99;
	int menor = 99;
	
	for(int l = 0; l < TAM; l++)
	{
		for(int c = 0; c < TAM; c++)
		{
			printf("Informe os numeros: ");
			scanf("%d",&matriz[l][c]);
			if(maior < matriz[l][c])
			{
				maior = matriz[l][c];
				i = l;
				j = c;
			}
			if(menor > matriz[l][c])
			{
				menor = matriz[l][c];
				o = l;
				k = c;
			}
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
	printf("Maior numero e %d na (%d,%d)\n",maior, i, j);
	printf("Menor numero e %d na (%d,%d)\n",menor, o, k);
	return(0);
}