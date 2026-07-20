#include <stdio.h>

struct Endereco
{
	char rua [50];
	int numero;
};
struct Pessoa
{
	char nome [50];
	int idade;
	struct Endereco end;
};
int main()
{
	printf("Informer ");