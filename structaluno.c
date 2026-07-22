#include <stdio.h>

struct Alunos
{
	char nome[50];
	int idade;
	float nota;
};
int main()
{
	struct Alunos turma[3];
	for(int i = 0; i < 3; i++)
	{
		scanf(" %[^\n]",turma[i].nome);
		scanf("%d",&turma[i].idade);
		scanf("%f",&turma[i].nota);
	}
	for(int i = 0; i < 3; i++)
	{
		printf("Nome: %s\n",turma[i].nome);
		printf("Idade: %d\n",turma[i].idade);
		printf("Nota: %.1f\n",turma[i].nota);
	}
	return(0);
}