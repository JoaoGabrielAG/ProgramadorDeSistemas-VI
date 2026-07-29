#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <windows.h>
#define TAM 5 /*Definindo o Tamanho do mapa*/
#define TESOURO 3 /*Definindo a quantidade de Tesouro*/

typedef struct/*Criandor uma variavel*/
{
	char nome[20];
	int tentativas;	
}Jogador;

void inicializar_mapa(char mapa[TAM][TAM]);
void mostrar_mapa(char mapa[TAM][TAM]);
void posicinar_tesouros(char mapa[TAM][TAM], aux[6]);
int procurar_tesouros(char mapa[TAM][TAM], int *encontrados, aux[6]);
void salvar_arquivo(Jogador jogador);

int main()
{
	char mapa[TAM][TAM];
	int aux[6];
	Jogador jogador;
	int encontrados = 0;
	jogador.tentativas = 0;
	
	printf("------BEM-VINDO-AO-GAME------\n");
	printf("Informe o seu nome: ");
	scanf("%s",jogador.nome);
	
	inicializar_mapa(mapa);
	posicinar_tesouros(mapa);
	
	while(encontrados < TESOURO)
	{
		mostrar_mapa(mapa);
		procurar_tesouros(mapa, &encontrados);
	}
	salvar_arquivo(jogador);
	return(0);
}

void inicializar_mapa(char mapa[TAM][TAM])
{
	int i, j;
	
	for(int i = 0; i < TAM; i++)
	{
		for(int j = 0; j < TAM; j++)
		{
			mapa[i][j] = '#';
		}
	}
}

void mostrar_mapa(char mapa[TAM][TAM])
{
	int i, j;
	printf("\n  ");
	for(int j = 0; j < TAM; j++)
	{
		printf("%d ",j);
	}
	printf("\n");
	for(int i = 0; i < TAM; i++)
	{
		printf("%d ",i);
		for(int j = 0; j < TAM; j++)
		{
			printf("%c ",mapa[i][j]);
		}
		printf("\n");
	}
}

void posicinar_tesouros(char mapa[TAM][TAM], int aux[6])
{
	int aant = -1, bant = -1;
	int a ;
	int b ;
	for(int i = 0; i < TESOURO; i++)
	{
		srand((unsigned int)time(NULL));
		 a = rand() %5;
		 b = rand() %5;
		if(aant == a && bant == b)
		{
			 a = rand()%5;
			 b = rand()%5;
		}
		else
		{
			mapa[a][b] = 'T';
		}
		sleep(1000);
	}
}

int procurar_tesouros(char mapa[TAM][TAM], int *encontrados, int aux[6])
{
	int linha, coluna;
	printf("\nTesouro Encontrado: %d/%d\n",*encontrados,TESOURO);
	printf("\nLinha: ");
	scanf("%d",&linha);
	printf("\nColuna: ");
	scanf("%d",&coluna);
	if(mapa[linha][coluna] == 'T')
	{
		printf("\n!!!Tesouro Encontrado!!!\n");
		mapa[linha][coluna] = 'X';
		(*encontrados)++ ;
		return(1);
	}
	else
	{
		printf("\nNada Encontrado\n");
		mapa[linha][coluna] = 'O';
		return(1);
	}
}

void salvar_arquivo(Jogador jogador)
{
	FILE* arquivo;
	
	arquivo = fopen("historico.txt","a");
	if(arquivo = NULL)
	{
		printf("\n!ERROR! o arquivo nao abriu\n");
		return;
	}
	else
	{
		fprintf(arquivo,"%s %d\n",jogador.nome, jogador.tentativas);
		fclose(arquivo);
	}
}