#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

#define T 8
#define N 3

typedef struct{
	char nome[25];
	int tentativas;
}Jogador;

void inicializar_Tabuleiro(char tabuleiro[T][T]);
void mostrar_Tabuleiro(char tabuleiro[T][T]);
void posicionar_Navios(char tabuleiro[T][T]);
int realizar_Ataque(char tabuleiro[T][T], int *encontrado, Jogador jogador);
void salvar_Resultador(Jogador jogador);
void ler_resultador(Jogador jogador);

int main()
{
	char tabuleiro[T][T];
	Jogador jogador;
	jogador.tentativas = 0;
	int encontrado = 0;
	
	printf("\n====================================\n");
	printf("-----BEM-VINDO-AO-BATALHA-NAVAL-----");
	printf("\n====================================\n");
	printf("Qual e o seu nome: ");
	scanf("%[^\n]",jogador.nome);
	
	inicializar_Tabuleiro(tabuleiro);
	posicionar_Navios(tabuleiro);
	
	while(encontrado < N)
	{
		mostrar_Tabuleiro(tabuleiro);
		jogador.tentativas += 1;
		realizar_Ataque(tabuleiro, &encontrado,jogador);
	}
	salvar_Resultador(jogador);
	ler_resultador(jogador);
	if(encontrado = N)
	{
		printf("\n\n!!!PARABENS VOCE GANHOU!!!\n\n");
	}
	return(0);
}

void inicializar_Tabuleiro(char tabuleiro[T][T])
{
	for(int i = 0; i < T; i++)
	{
		for(int j = 0; j < T; j++)
		{
			tabuleiro[i][j] = '~';
		}
	}
}

void mostrar_Tabuleiro(char tabuleiro[T][T])
{
	printf("\n  ");
	for(int j = 0; j < T; j++)
	{
		printf("%d ",j);
	}
	printf("\n");
	for(int i = 0; i < T; i++)
	{
		printf("%d ",i);
		for(int j = 0; j < T; j++)
		{
			printf("%c ",tabuleiro[i][j]);
		}
		printf("\n");
	}
}

void posicionar_Navios(char tabuleiro[T][T])
{
	int at = -1, bt = -1;
	int a, b;
	
	for(int i = 0; i < N; i++)
	{
		srand((unsigned int)time(NULL));
		a = rand() %8;
		b = rand() %8;
		if(at == a && bt == b)
		{
			a = rand()%8;
			b = rand()%8;
		}
		else
		{
			tabuleiro[a][b] = 'N';
		}
		Sleep(1000);
	}
}

int realizar_Ataque(char tabuleiro[T][T], int *encontrado, Jogador jogador)
{
	int linha, coluna;
	
	printf("Encontrado: %d/%d\n",*encontrado, N);
	printf("\nNumeros de Tentativas: %d",jogador.tentativas);
	printf("\nInforme uma posicao para o ataque:\n");
	printf("Linha: ");
	scanf("%d",&linha);
	printf("Coluna: ");
	scanf("%d",&coluna);
	if(tabuleiro[linha][coluna] == 'N')
	{
		printf("\nVoce achou um Navio\n");
		tabuleiro[linha][coluna] = 'X';
		(*encontrado)++;
		printf("%d/%d\n",*encontrado, N);
		return(1);
	}
	else
	{
		printf("\nVoce nao achou nenhum Navio\n");
		tabuleiro[linha][coluna] = 'O';
		return(1);
	}
}

void salvar_Resultador(Jogador jogador)
{
	FILE *historico;
	
	historico = fopen("historico.txt","a");
	if(historico == NULL)
	{
		printf("\n!ERROR AO ABRIR O ARQUIVO!\n");
	}
	else
	{
		for(int i = 0; i < 5; i++)
		{
			fprintf(historico, "%s\n%d",jogador.nome, jogador.tentativas);
		}
	}
	fclose(historico);
}

void ler_resultador(Jogador jogador)
{
	FILE *historico;
	
	historico = fopen("historico.txt","a");
	if(historico == NULL)
	{
		printf("\n!ERROR AO ABRIR O ARQUIVO!\n");
	}
	else
	{
		for(int i = 0; i < 5; i++)
		{
			fscanf(historico, "%s\n%d",jogador.nome, jogador.tentativas);
			printf("%s %d",jogador.nome, jogador.tentativas);
		}
	}
	fclose(historico);
}