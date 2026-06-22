#include <stdio.h>

int main()
{
	char nome[25];
	int placar = 0;
	char resp;
	
	printf("==============================\n|Bem vindo ao jogo de revisao|\n==============================\n");
	
	printf("Informe seu nome:\n");
	scanf("%[^\n]",nome);
	
	printf("Pergunta 01 - Qual e a diferencia entre double e float?\n");
	printf("(A) Ambos sao Iguais\n");
	printf("(B) Ambos usam 4 bits de espaco de memoria\n");
	printf("(C) O double oucupa 8 bits ja o float oucupa 4 bits\n");
	printf("(D) Nenhuma das anteriores\n");
	
	scanf(" %c",&resp);
	if(resp == 'C' || resp == 'c')
	{
		placar++;
	}
	
	printf("Pergunta 02 - Qual a estrutura devo utilizar quando nao sei o numero de interacoes do meu laco?\n");
	printf("(A) Estrutura For\n");
	printf("(B) Estrutura WHILE\n");
	printf("(C) Estrutura DO WHILE\n");
	printf("(D) Devemos utilizar o IF\n");
	
	scanf(" %c",&resp);
	if(resp == 'B' || resp == 'b')
	{
		placar++;
	}

	printf("Pergunta 03 - Para que serve o metodo de newton-raphson?\n");
	printf("(A) Para dificutar nossa vida\n");
	printf("(B) Para calcular a distancia entre dois ponto\n");
	printf("(C) Para aproximar polinomios e encontrar suas raizes\n");
	printf("(D) Para poder usar o teclado\n");
	
	scanf(" %c",&resp);
	if(resp == 'C' || resp == 'c')
	{
		placar++;
	}
	
	printf("Pergunta 04 - Dada a proposicao P^Q. Qual sua tabela verdade?\n");
	printf("(A) |-------------|\n");
	printf("    |-P-|-Q-|-P^Q-|\n");
	printf("    |-0-|-0-|--0--|\n");
	printf("    |-0-|-1-|--0--|\n");
	printf("    |-1-|-0-|--0--|\n");
	printf("    |-1-|-1-|--1--|\n");
	printf("    |-------------|\n");
	
	printf("(B) |-------------|\n");
	printf("    |-P-|-Q-|-P^Q-|\n");
	printf("    |-0-|-0-|--1--|\n");
	printf("    |-0-|-1-|--0--|\n");
	printf("    |-1-|-0-|--0--|\n");
	printf("    |-1-|-1-|--1--|\n");
	printf("    |-------------|\n");
	
	printf("(C) |-------------|\n");
	printf("    |-P-|-Q-|-P^Q-|\n");
	printf("    |-0-|-0-|--0--|\n");
	printf("    |-0-|-1-|--1--|\n");
	printf("    |-1-|-0-|--1--|\n");
	printf("    |-1-|-1-|--1--|\n");
	printf("    |-------------|\n");
	
	printf("(D) |-------------|\n");
	printf("    |-P-|-Q-|-P^Q-|\n");
	printf("    |-0-|-0-|--1--|\n");
	printf("    |-0-|-1-|--0--|\n");
	printf("    |-1-|-0-|--0--|\n");
	printf("    |-1-|-1-|--0--|\n");
	printf("    |-------------|\n");
	
	scanf(" %c",&resp);
	if(resp == 'A' || resp == 'a')
	{
		placar++;
	}
	
	printf("Pergunta 05 - Para que serve a biblioteca <stdio.h>?\n");
	printf("(A) Para podemos usar o mouse\n");
	printf("(B) Para conseguir fazer soma\n");
	printf("(C) Para podemos usar o teclado\n");
	printf("(D) Para utilizamos as funcoes que controlam entradas e saidas do sistemas\n");
	
	scanf(" %c",&resp);
	if(resp == 'D' || resp == 'd')
	{
		placar++;
	}
	
	printf("Parabens %s sua pontuacao e: %d/5", nome, placar);
	return(0);
}