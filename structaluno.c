#include <stdio.h>

struct Alunos[5]
{
	char nome[50];
	int numero;
};
int main()
{
	struct Alunos[0] a1;
	scanf("%[^\n]",a1.nome);
	scanf("%d",&a1.numero);
	printf("Nome:");
	printf("Numero do Aluno:");
	return;
}