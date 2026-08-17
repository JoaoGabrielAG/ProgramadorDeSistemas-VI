#include <stdio.h>

struct Endereco
{
	char rua[50];
	*p -> rua;
	int numero;
	*o -> numero;
}
struct Pessoa
{
	char nome[50];
	*i -> nome;
	int idade;
	*u -> idade
	struct Endereco;
}

int main ()
{
	struct Endereco a1;
	struct Endereco *p;
	*p = &a1;
	struct Pessoa b1;
	struct Pessoa *o;
	*o = &b1;
	printf("Nome:");
	scanf(" %[^s]",o->nome);
	printf("\nIdade: ");
	scanf("%d",&o->idade);
	printf("\nRua: ");
	scanf(" %[^s]",p->rua);
	printf("\nNumero: ");
	scanf("%d",&p->numero);
	printf("\nDados\n");
	printf("Nome: %s\n",o->nome);
	printf("Idade: %d\n",o->idade);
	printf("Rua: %s\n",p->rua);
	printf("Numero: %d",p->numero);
	
	return(0);
}