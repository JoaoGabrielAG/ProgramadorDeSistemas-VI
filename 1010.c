#include <stdio.h>

int main ()
{
	int modelo = 0, modelo_2 = 0;
	int peca = 0, peca_2 = 0;
	float preco = 0.0, preco_2 = 0.0;
	float total = 0.0;
	
	scanf("%d %d %f",&modelo,&peca,&preco);
	scanf("%d %d %f",&modelo_2,&peca_2,&preco_2);
	
	total = (peca * preco) + (peca_2 * preco_2);
	printf("VALOR A PAGAR: R$ %.2f\n",total);
	
	return(0);
}