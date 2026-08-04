#include<stdio.h>
#define T 5

int main()
{
	int matriz[T][T];
	int par = 0, impar = 0;
	
	for(int l = 0; l < T; l++)
	{
		for(int c = 0; c < T; c++)
		{
			printf("Informe o numero: ");
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
	for(int l = 0; l < T; l++)
	{
		for(int c = 0; c < T; c++)
		{
			if( matriz[l][c] % 2 == 0)
			{
				par++;
			}
			else
			{
				impar++;
			}
		}
	}
	printf("Quantidade de numero par: %d\n",par);
	printf("Quantidade de numero impar: %d\n",impar);
	
	return(0);
}