#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void criarpersonagem (char nick[]);
void verstatus (char nick[], int hp, int hpm, int atq, int def, int nivel, int exp, int ouro);
void explorarMapa(int *hp, int *ouro, int *ppi, int *pgi);
void combate();
void subirNivel();
void loja();
void inventario(int *ouro, int *ppi,int *pgi,int *espada,int *escudo,int * arm);
void descansar();
void chefeFinal();

int main ()
{
	char nick[50];
	char *e = nick;
	int opcao, hp = 100, hpm = 100, atq = 10, def = 5, nivel = 1, exp = 0, ouro = 50;
	int ghp = 30, gatq = 5, ehp = 50, eatq = 8, ohp = 80, oatq = 12, lhp = 120, latq = 15, dhp = 300, datq = 25;
	int inventario[20], ppi, pgi, espada, escudo, arm;
	int *o = &hpm, *i = &atq, *u = &def, *y = &nivel, *t = &exp, *r = &ouro;
	do{
		printf("=================================================\n");
		printf("          RPG DE TEXTO - A JORNADA DO HEROI      \n");
		printf("=================================================\n");
		printf("\n1 - Criar Personagem\n");
		printf("2 - Ver Status\n");
		printf("3 - Explorar Mapa\n");
		printf("4 - Loja\n");
		printf("5 - Inventario\n");
		printf("6 - Descansar\n");
		printf("7 - Enfrentar Chefe Final\n");
		printf("0 - Sair\n");
		printf("-------------------------------------------------\n");
		scanf("%d",&opcao);
		switch(opcao)
		{
			case 1:
				criarpersonagem(nick);
			break;
			case 2:
				verstatus(nick, hp, hpm, atq, def, nivel, exp, ouro);
			break;
			case 3:
				explorarMapa(&hp,&ouro,&ppi,&pgi);
			break;
			/*case 4:
			break;
			case 5:
			break;
			case 6:
			break;
			case 7:
			break;*/
			case 0:
			break;
			default:
			printf("Essa opcao nao existe!\n");
			break;
		}
	}while(opcao != 0);
		return(0);
}
void criarpersonagem (char nick[])
{
	printf("Digite o nome do heroi:\n");
	scanf("%s",nick);
	printf("Personagem criado com sucesso!\n");
}
void verstatus (char nick[], int hp, int hpm, int atq, int def, int nivel, int exp, int ouro)
{
	printf("Nome: %s\n", nick);
	printf("\nVida: %d/%d\n",hp,hpm);
	printf("Ataque: %d\n",atq);
	printf("Defesa: %d\n",def);
	printf("\nNivel: %d\n",nivel);
	printf("Experiencia: %d\n",exp);
	printf("\nOuro: %d\n",ouro);
}
void explorarMapa(int *hp, int *ouro, int *ppi, int *pgi)
{
	srand(time(NULL));
	int eventosorteado = rand() % 4;
	switch(eventosorteado)
	{
		case 0:
			printf("Voce Encontrou um Monstro!\n");
			srand(time(NULL));
			int eventosorteado = rand() % 3;
			switch(combate)
			case 0:
				printf("Voce achou um Goblin\n");
			break;
			
			
			
			
			
		break;
		case 1:
			printf("Voce Encontrou um Tesouro!\n");
			*ouro += 20;
			printf("+20 moedas de ouro\n");
		break;
		case 2:
			printf("Voce Encontrou uma Pocao!\n");
			srand(time(NULL));
			int eventosorteado = rand() % 10;
			if(eventosorteado > 5)
			{
				printf("Parabens, Voce ganhou uma Pocao Pequena!\n");
				*ppi += 1;
			}
			else
			{
				printf("Parabens, Voce ganhou uma Pocao Grande!\n");
				*pgi += 1;
			}
		break;
		case 3:
			printf("Voce caiu em uma Armadilha!\n");
			*hp -= 15;
			printf("Perdeu 15 pontos de vida.\n");
		break;
		case 4:
			printf("Nada Aconteceu\n");
		break;
	}	
}
/*void combate();
{}
void subirNivel();
{}
void loja();
{}
void inventario();
{}
void descansar();
{}
void chefeFinal();
{}*/