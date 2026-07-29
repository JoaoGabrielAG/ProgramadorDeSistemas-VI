#include <stdio.h>
#define TAM 5 /*Definindo o Tamanho do mapa*/
#define TESOURO 3 /*Definindo a quantidade de Tesouro*/

typedef struct/*Criandor uma variavel*/
{
	char nome[20];
	int tentativas;	
}Jogador;

void inicializar_mapa(char mapa[TAM][TAM]);
void mostrar_mapa(char mapa[TAM][TAM]);
void posicinar_tesouros(char mapa[TAM][TAM]);
int procurar_tesouros(char mapa[TAM][TAM], int *encontrados);
void salvar_arquivo(Jogador jogador);

int main()
{
	char mapa[TAM][TAM];
	Jogador jogador;
	int encontrados = 0;
	jogador.tentativas = 0;
	
	printf("------BEM-VINDO-AO-GAME------\n");
	printf("Informe o seu nome: ");
	scanf("%s",jogador.nome);
	
	inicializar_mapa(mapa[TAM][TAM]);
	posicinar_tesouros(mapa[TAM][TAM]);
	salvar_arquivo(jogador);
	
	while(encontrados < TESOURO)
	{
		mostrar_mapa(mapa[TAM][TAM]);
		posicinar_tesouros(mapa[TAM][TAM]);
		procurar_tesouros(mapa[TAM][TAM], &encontrados);
	}
	
	return(0);
}

void inicializar_mapa(char mapa[TAM][TAM])
{
	int i, j;
	
	for(int i = 0; i < TAM; i++)
	{
		for(int j = 0; j < TAM; j++)
		{
			mapa[i][j] = '5';
		}
	}
}

void mostrar_mapa(char mapa[TAM][TAM])
{
	int i, j;
	printf("\n");
	for(int j = 0; j < TAM; j++)
	{
		printf("%d ",j);
	}
	printf("\n");
	for(int i = 0; i < TAM; i++)
	{
		for(int j = 0; j < TAM; j++);
		{
			printf("%c ",mapa[i][j]);
		}
		printf("\n");
	}
}

void posicinar_tesouros(char mapa[TAM][TAM])
{
	mapa[3][1] = 'T';
	mapa[4][0] = 'T';
	mapa[3][2] = 'T';
}

int procurar_tesouros(char mapa[TAM][TAM], int *encontrados)
{
	int linha, coluna;
	printf("Tesouro Encontrado: %d/3",*encontrados);
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