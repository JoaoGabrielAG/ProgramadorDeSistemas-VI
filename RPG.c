#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void criarpersonagem (char nick[]);
void verstatus (char nick[], int hp, int hpm, int atq, int def, int nivel, int exp, int ouro, int expmax);
void explorarMapa(int *hp, int *ouro, int *ppi, int *pgi);
void combate();
void subirNivel();
void loja();
void inventario(int inv[], int *ppi, int *pgi, int *espada, int *escudo, int *arm, int *hp, int *def, int *atq);
void descansar();
void chefeFinal();

int main ()
{
	char nick[50];
	char *e = nick;
	int opcao, hp = 100, hpm = 100, atq = 10, def = 5, nivel = 1, exp = 0, ouro = 50, expmax = 100;
	int ghp = 30, gatq = 5, ehp = 50, eatq = 8, ohp = 80, oatq = 12, lhp = 120, latq = 15, dhp = 300, datq = 25;
	int inv[20];
	int ppi = 0, pgi = 0, espada = 0, escudo = 0, arm = 0;
	int *o = &hpm, *i = &atq, *u = &def, *y = &nivel, *t = &exp, *r = &ouro;
	hp > 100 == 100;
	printf("O reino de C-Nai está sendo atacado por criaturas sombrias."\n);
	printf("Você é um aventureiro escolhido para derrotar o terrível Dragão das Sombras, uma criatura poderosa que ameaça destruir todo o reino.\n");
	printf("Para conseguir derrotá-lo será necessário:\n");
	Explorar regiões perigosas;
	Enfrentar monstros;
	Ganhar experiência;
	Coletar ouro;
	Comprar equipamentos;
	Evoluir seu personagem.
	printf("Somente os aventureiros mais fortes serão capazes de derrotar o dragão.");
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
				verstatus(nick, hp, hpm, atq, def, nivel, exp, ouro, expmax);
			break;
			case 3:
				explorarMapa(&hp,&ouro,&ppi,&pgi);
			break;
			/*case 4:
			break;*/
			case 5:
				inventario(inv, &ppi, &pgi, &espada, &escudo, &arm, &hp, &def, &atq);
			break;
			/*case 6:
			break;
			case 7:
			break;*/
			case 0:
			break;
			default:
			printf("Talvez em futuras atualizacoes\n");
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
void verstatus (char nick[], int hp, int hpm, int atq, int def, int nivel, int exp, int ouro, int expmax)
{
	printf("Nome: %s\n", nick);
	printf("\nVida: %d/%d\n",hp,hpm);
	printf("Ataque: %d\n",atq);
	printf("Defesa: %d\n",def);
	printf("\nNivel: %d\n",nivel);
	printf("Experiencia: %d/%d\n",exp, expmax);
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
			/*srand(time(NULL));
			int eventosorteado = rand() % 3;
			switch(combate){
				case 0:
					printf("Voce achou um Goblin\n");
				break;
			}*/
			
			
			
			
			
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
			if(eventosorteado > 3)
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
{
	do{
		printf("1 - Atacar\n2 - Usar Item\n3 - Defende\n4 - Fugir\n")
		switch(combate)
		{
			case 1:
				dano = atq
		
		
	
	
	
	
}
/*void subirNivel(int exp, int atq, int def, int hpm, int hp, int expmax);
{
    if(experiencia >= expmax)
	{
        nivel++
        *atq += 5
        *def += 3
        *hpm += 20
        *hp = *hpm
        *exp = 0
		*expmax = 100 + 100
		printf("Voce subir de Nivel!\n");
	}
	else
	{}
}
void loja();
{}*/
void inventario(int inv[], int *ppi, int *pgi, int *espada, int *escudo, int *arm, int *hp, int *def, int *atq)
{
	int opcao_inv, inv_1, inv_2, inv_3, inv_4, inv_5;
	do{
		printf("1 - Porcao Pequena: %d\n2 - Porcao Grande: %d\n3 - Espada: %d\n4 - Escudo: %d\n5 - Armadura: %d\n0 - Voltar\n", *ppi, *pgi, *espada, *escudo, *arm);
		scanf("%d",&opcao_inv);
		switch(opcao_inv){
			case 1:
			do{
				printf("1 - Visualizar Item\n2 - Usar Item\n3 - Descartar Item\n0 - Voltar\n");
				scanf("%d",&inv_1);
				switch(inv_1){
					case 1:
					printf("\nRecupera 20 de vida\n\n");
					break;
					case 2:
					if(*ppi > 0){
					*hp += 20;
					printf("Voce recuperou 20 de vida\n");}
					else{
					printf("Voce nao tem Porcao Pequena\n");}
					break;
					case 3:
					if(*ppi > 0){
					*ppi -= 1;
					printf("Voce descatou 1 item\n");}
					else{
					printf("Voce nao tem Porcao Pequena\n");}
					break;
					case 0:
					break;
					default:
					printf("Escolha umas das opcao acima\n");
				}
			}while(inv_1 != 0);
				return;
				break;
			
			case 2:
			do{
				printf("1 - Visualizar Item\n2 - Usar Item\n3 - Descartar Item\n0 - Voltar\n");
				scanf("%d",&inv_2);
				switch(inv_2){
					case 1:
					printf("\nRecupera 50 de vida\n\n");
					break;
					case 2:
					if(*pgi > 0){
					*hp += 50;
					printf("Voce recuperou 50 de vida\n");}
					else{
					printf("Voce nao tem Porcao Grande\n");}
					break;
					case 3:
					if(*pgi > 0){
					*pgi -= 1;
					printf("Voce descatou 1 item\n");}
					else{
					printf("Voce nao tem Porcao Grande\n");}
					break;
					case 0:
					break;
					default:
					printf("Escolha umas das opcao acima\n");
				}
			}while(inv_2 != 0);
				return;
				break;
			
			case 3:
			do{
				printf("1 - Visualizar Item\n2 - Usar Item\n3 - Descartar Item\n0 - Voltar\n");
				scanf("%d",&inv_3);
				switch(inv_3){
					case 1:
					printf("\nAtaque +5\n\n");
					break;
					case 2:
					if(*espada > 0){
					*atq += 5;
					printf("Voce ganhou +5 de Ataque\n");}
					else{
					printf("Voce nao tem Espada\n");}
					break;
					case 3:
					if(*espada > 0){
					*espada -= 1;
					printf("Voce descatou 1 item\n");}
					else{
					printf("Voce nao tem Espada\n");}
					break;
					case 0:
					break;
					default:
					printf("Escolha umas das opcao acima\n");
					break;
				}
			}while(inv_3 != 0);
				return;
			break;
			case 4:
			do{
				printf("1 - Visualizar Item\n2 - Usar Item\n3 - Descartar Item\n0 - Voltar\n");
				scanf("%d",&inv_4);
				switch(inv_4){
					case 1:
					printf("\nEscudo +3\n\n");
					break;
					case 2:
					if(*escudo > 0){
					*def += 3;
					printf("Voce ganhou +3 de Defesa\n");}
					else{
					printf("Voce nao tem Escudo\n");}
					break;
					case 3:
					if(*escudo > 0){
					*escudo -= 1;
					printf("Voce descatou 1 item\n");}
					else{
					printf("Voce nao tem Escudo\n");}
					break;
					case 0:
					break;
					default:
					printf("Escolha umas das opcao acima\n");
				}
			}while(inv_4 != 0);
				return;
				break;
			case 5:
			do{
				printf("1 - Visualizar Item\n2 - Usar Item\n3 - Descartar Item\n0 - Voltar\n");
				scanf("%d",&inv_5);
				switch(inv_5){
					case 1:
					printf("\nDefesa +5\n\n");
					break;
					case 2:
					if(*arm > 0){
					*def += 5;
					printf("Voce ganhou +5 de Defesa\n");}
					else{
					printf("Voce nao tem Armadura\n");}
					break;
					case 3:
					if(*arm > 0){
					*arm -= 1;
					printf("Voce descatou 1 item\n");}
					else{
					printf("Voce nao tem Armadura\n");}
					break;
					case 0:
					break;
					default:
					printf("Escolha umas das opcao acima\n");
				}
			}while(inv_5 != 0);
				return;
				break;
			case 0:
			break;
			default:
			printf("Talvez em futuras atualizacoes\n");
		}
		}while(opcao_inv != 0);
		return;
}

/*void descansar();
{}
void chefeFinal();
{}*/