#include <stdio.h>

struct Endereco
{
	char rua[50];
	int numero;
};
struct Pessoa
{
	char nome[50];
	int idade;
	struct Endereco;
};

int main ()
{
	struct Endereco a1;
	struct Endereco *p;
	p = &a1;
	struct Pessoa b1;
	struct Pessoa *o;
	o = &b1;
	printf("Nome:");
	scanf(" %[^\n]",o->nome);
	printf("\nIdade: ");
	scanf("%d",&o->idade);
	printf("\nRua: ");
	scanf(" %[^\n]",p->rua);
	printf("\nNumero: ");
	scanf("%d",&p->numero);
	printf("\nINFORMACOES\n");
	printf("Nome: %s\n", o->nome);
	printf("Idade: %d\n", o->idade);
	printf("Rua: %s\n", p->rua);
	printf("Numero: %d", p->numero);
	
	return(0);
}