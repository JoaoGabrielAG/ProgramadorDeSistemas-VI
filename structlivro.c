#include <stdio.h>

struct Livro
{
	char titulo[50];
	char autor[50];
	float preco;
};
int main()
{
	struct Livro a1;
	scanf("%[^\n]",a1.titulo);
	scanf(" %[^\n]",a1.autor);
	scanf("%f",&a1.preco);
	printf("\n\nTitulo: %s\n",a1.titulo);
	printf("Autor: %s\n",a1.autor);
	printf("Preco: %.2f\n",a1.preco);
	return(0);
}