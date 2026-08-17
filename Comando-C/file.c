#include <stdio.h>

int main()
{
	//criando a variável ponteiro para o arquivo
	FILE *pont_arq;
	char palavra[20];
	int idade = 0;
	int total = 0;
	
	//abrindo o arquivo
	pont_arq = fopen("arquivo.txt","a");
	
	if (pont_arq == NULL)
	{
		printf("ERRO! O arquivo nao foi aberto!\n");
	}
	else
	{
		printf("O Arquivo foi aberto com sucesso!\n");
		
		for(int i = 0; i < 2; i++)
		{
			printf("\nEscreva seu nome:");
			scanf("%s", palavra);
			printf("\nEscreva sua Idade:");
			scanf("%d", &idade);
			//usando fprintf para armazenar a string no arquivo
			fprintf(pont_arq, "%s\n%d", palavra,idade);
		}
	}
	//fechando arquivo
	fclose(pont_arq);
	
	//abrindo o arquivo
	pont_arq = fopen("arquivo.txt","r");
	
	if (pont_arq == NULL)
	{
		printf("ERRO! O arquivo nao foi aberto!\n");
	}
	else
	{
		printf("O arquivo foi aberto com sucesso!\n");
		printf("Pessoas Cadastradas:\n");
		//usando fscanf para ler os dados do arquivo
		for(int i = 0; i < 2; i++)
		{
			fscanf(pont_arq,"%s\n%d",palavra,&idade);
			printf("%s\n%d\n",palavra,idade);
		}
	}
	//fechando arquivo
	fclose(pont_arq);
	
	return(0);
}