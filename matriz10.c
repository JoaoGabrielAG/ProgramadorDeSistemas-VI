#include<stdio.h>
#define T 5

int main()
{
	int matriz[T][T];
	int maior = -99;
	int num;
	
	for(int l = 0; l < T; l++)
	{
		for(int c = 0; c < T; c++)
		{
			printf("Informe os numeros: ");
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
	for(int c = 0; c < T; c++)
	{
		maior = matriz[0][c];
		for(int l = 1; l < T; l++)
		{
			if(matriz[l][c] > maior)
			{
				maior = matriz[l][c];
			}
    }
    printf("Maior da coluna %d: %d\n", c, maior);
}
	return(0);
}