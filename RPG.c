#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void criarpersonagem (char nick[]);
void verstatus (char nick[], int hp, int hpm, int atq, int def, int nivel, int exp, int ouro, int expmax);
void explorarMapa(int *hp, int atq, int def, int *ouro, int *exp, int *ppi, int *pgi, int ghp, int gatq, int ehp, int eatq, int ohp, int oatq, int lhp, int latq, int *hpm);
void combater(int *hp, int atq, int def, char nome[], int hpMonstro, int atqMonstro, int *ouro, int *exp, int *hpm, int *ppi, int *pgi);
void subirNivel(int *exp, int *atq, int *def, int *hpm, int *hp, int *expmax, int *nivel);
void loja(int ouro, int *ppi, int *pgi, int *espada, int *escudo, int *arm);
void inventario(int inv[], int *ppi, int *pgi, int *espada, int *escudo, int *arm, int *hp, int *def, int *atq, int *hpm);
void descansar(int *hp, int *hpm);
void chefeFinal(int *hp, int atq, int def, int dhp, int datq, int *ouro, int *exp, int nivel, int *hpm, int *ppi, int *pgi);

int main ()
{
	char nick[50];
	char *e = nick;
	int opcao, hp = 100, hpm = 100, atq = 10, def = 5, nivel = 1, exp = 0, ouro = 50, expmax = 100;
	int ghp = 30, gatq = 5, ehp = 50, eatq = 8, ohp = 80, oatq = 12, lhp = 120, latq = 15, dhp = 300, datq = 25;
	int inv[20];
	int ppi = 0, pgi = 0, espada = 0, escudo = 0, arm = 0;
	printf("O reino de C-Nai esta sendo atacado por criaturas sombrias.\n");
	printf("Voce e um aventureiro escolhido para derrotar o terrivel DragaoGPT das Sombras, uma criatura poderosa que ameaca destruir todo o reino.\n");
	printf("Para conseguir derrota-lo sera necessario:\n");
	printf("Explorar regioes perigosas;\n");
	printf("Enfrentar monstros;\n");
	printf("Ganhar experiencia;\n");
	printf("Coletar ouro;\n");
	printf("Comprar equipamentos;\n");
	printf("Evoluir seu personagem.\n");
	printf("Somente os aventureiros mais fortes serao capazes de derrotar o dragaoGPT.\n");
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
		printf("\nEscolha: ");
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
				explorarMapa(&hp, atq, def, &ouro, &exp, &ppi, &pgi, ghp, gatq, ehp, eatq, ohp, oatq, lhp, latq, &hpm);
			break;
			case 4:
				loja(ouro, &ppi, &pgi, &espada, &escudo, &arm);
			break;
			case 5:
				inventario(inv, &ppi, &pgi, &espada, &escudo, &arm, &hp, &def, &atq, &hpm);
			break;
			case 6:
				descansar(&hp, &hpm);
			break;
			case 7:
				chefeFinal(&hp, atq, def, dhp, datq, &ouro, &exp, nivel, &hpm, &ppi, &pgi);
			break;
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
	printf("\nDigite o nome do heroi:\n");
	scanf("%s",nick);
	printf("Personagem criado com sucesso!\n");
}
void verstatus (char nick[], int hp, int hpm, int atq, int def, int nivel, int exp, int ouro, int expmax)
{
	printf("\nNome: %s\n", nick);
	printf("\nVida: %d/%d\n",hp,hpm);
	printf("Ataque: %d\n",atq);
	printf("Defesa: %d\n",def);
	printf("\nNivel: %d\n",nivel);
	printf("Experiencia: %d/%d\n",exp, expmax);
	printf("\nOuro: %d\n",ouro);
}
void explorarMapa(int *hp, int atq, int def, int *ouro, int *exp, int *ppi, int *pgi, int ghp, int gatq, int ehp, int eatq, int ohp, int oatq, int lhp, int latq, int *hpm)
{
	srand(time(NULL));
	int eventosorteado = rand() % 4;
	switch(eventosorteado)
	{
		case 0:
			printf("\nVoce Encontrou um Monstro!\n");
			int monstro = rand()%4;
            switch(monstro)
            {
                case 0:
                    combater(hp, atq, def, "Goblin", ghp, gatq, ouro, exp, hpm, ppi, pgi);
                    break;

                case 1:
                    combater(hp, atq, def, "Esqueleto", ehp, eatq, ouro, exp, hpm, ppi, pgi);
                    break;

                case 2:
                    combater(hp, atq, def, "Orc", ohp, oatq, ouro, exp, hpm, ppi, pgi);
                    break;

                case 3:
                    combater(hp, atq, def, "Lobisomem", lhp, latq, ouro, exp, hpm, ppi, pgi);
                    break;
            }
		break;
		case 1:
			printf("\nVoce Encontrou um Tesouro!\n");
			*ouro += 20;
			printf("+20 moedas de ouro\n");
		break;
		case 2:
			printf("\nVoce Encontrou uma Pocao!\n");
			srand(time(NULL));
			int eventosorteado = rand() % 10;
			if(eventosorteado > 3)
			{
				printf("\nParabens, Voce ganhou uma Pocao Pequena!\n");
				*ppi += 1;
			}
			else
			{
				printf("\nParabens, Voce ganhou uma Pocao Grande!\n");
				*pgi += 1;
			}
		break;
		case 3:
			printf("\nVoce caiu em uma Armadilha!\n");
			*hp -= 15;
			printf("\nPerdeu 15 pontos de vida.\n");
		break;
		case 4:
			printf("\nNada Aconteceu\n");
		break;
	}	
}
void combater(int *hp, int atq, int def, char nome[], int hpMonstro, int atqMonstro, int *ouro, int *exp, int *hpm, int *ppi, int *pgi)
{
	int opcao, curar;
	while(*hp > 0 && hpMonstro > 0)
    {
        printf("\nSua vida: %d\nVida do %s: %d\n", *hp, nome,hpMonstro);
        printf("\n1 - Atacar\n2 - Defender\n3 - Usar Item\n4 - Fugir\nEscolha: ");
        scanf("%d",&opcao);
        switch(opcao){
            case 1:
                hpMonstro -= atq;
                printf("\nVoce causou %d de dano!\n",atq);
            break;
            case 2:
				*hp = atqMonstro/2;
                printf("\nVoce se defendeu!\n");
            break;
			case 3:
			printf("\nUsar qual Pocao\n1 - Pequena\n2 - Grande\n3 - Voltar\n");
					switch(curar){
						case 1:
							if(*ppi > 0){
							*hp += 20;
							*ppi -= 1;
								if(*hp > *hpm)
								{
									*hp = *hpm;
								}
							printf("\nVoce recuperou 20 de vida\n");
							}
							else{
							printf("\nVoce nao tem Porcao Pequena\n");
							}
						break;
						case 2:
							if(*pgi > 0){
							*hp += 50;
							*pgi -= 1;
							if(*hp > *hpm)
							{
								*hp = *hpm;
							}
							printf("\nVoce recuperou 50 de vida\n");
							}
							else{
							printf("\nVoce nao tem Porcao Grande\n");
							}
						break;
						case 3:
						break;
						default:
							printf("\nEscolha uma das opcao acima\n");
					}
				break;
            case 4:
				srand(time(NULL));
				int change = rand() % 100;
				if(change < 25)
				{
					printf("\nVoce fugiu!\n");
				return;
				}
				else{
					printf("\nSua fugar falou!\n");
				}
			break;
            default:
				printf("\nEssa opcao nao existe!\n");
        }
        if(hpMonstro > 0)
        {
            int dano = atqMonstro - def;

            if(dano < 1)
                dano = 1;
            *hp -= dano;
            printf("%s causou %d de dano!\n",nome,dano);
        }
    }
    if(*hp <= 0)
    {
        printf("\nVoce morreu!\n");
    }
    else
    {
        printf("\nVoce derrotou o %s!\n",nome);
        *ouro += 20;
        *exp += 30;
    }
}
void subirNivel(int *exp, int *atq, int *def, int *hpm, int *hp, int *expmax, int *nivel)
{
    if(exp > expmax)
	{
        (nivel)++;
        *atq += 5;
        *def += 3;
        *hpm += 20;
        *hp = *hpm;
        *exp = 0;
		*expmax = *expmax + 100;
		printf("\n=============================\n");
		printf("      LEVEL UP!\n");
		printf("=============================\n");
		printf("Nivel: %d\n", *nivel);
		printf("Ataque +5\n");
		printf("Defesa +3\n");
		printf("HP Maximo +20\n");
		printf("=============================\n");
	}
}
void loja(int ouro, int *ppi, int *pgi, int *espada, int *escudo, int *arm)
{
	int luja, q, w, e, r, t;
	printf("\nOuro: %d\n\n1 - Pocao Pequena: 20\n2 - Pocao Grande: 40\n3 - Espada: 100\n4 - Armadura: 120\n5 - Escudo: 80\n0 - Voltar\n", ouro);
	printf("\nEscolha: ");
	scanf("%d",&luja);
	do{
		switch(luja){
			case 1:
			printf("\nComprar Pocao Pequena?\n1 - Comfirmar\n2 - Voltar\n");
			scanf("%d",&q);
				switch(q){
					case 1:
					if(ouro >= 20){
						++*ppi;
						ouro -= 20;
					printf("\nVoce comprou a Pocao!!!\n");
					}
					else{
						printf("\nVoce não tem Ouro suficiente\n");
					}
					break;
					case 0:
					break;
					default:
					printf("\nEssa opção não existe\n");
				}
			return;
			break;
			case 2:
			printf("\nComprar Pocao Grande?\n1 - Comfirmar\n2 - Voltar\n");
			scanf("%d",&w);
				switch(w){
					case 1:
					if(ouro >= 40){
						++*pgi;
						ouro -= 40;
					printf("\nVoce comprou a Pocao!!!\n");
					}
					else{
						printf("\nVoce nao tem Ouro suficiente\n");
					}
					break;
					case 0:
					break;
					default:
					printf("\nEssa opcao nao existe\n");
				}
			return;
			break;
			case 3:
			printf("\nComprar Espada?\n1 - Comfirmar\n2 - Voltar\n");
			scanf("%d",&e);
				switch(e){
					case 1:
					if(ouro >= 100){
						++*espada;
						ouro -= 100;
					printf("\nVoce comprou a Espada!!!\n");
					}
					else{
						printf("\nVoce nao tem Ouro suficiente\n");
					}
					break;
					case 0:
					break;
					default:
					printf("\nEssa opcao nao existe\n");
				}
			return;
			break;
			case 4:
			printf("\nComprar Armadura?\n1 - Comfirmar\n2 - Voltar\n");
			scanf("%d",&r);
				switch(r){
					case 1:
					if(ouro >= 120){
						++*arm;
						ouro -= 120;
					printf("\nVoce comprou a Armadura!!!\n");
					}
					else{
						printf("\nVoce nao tem Ouro suficiente\n");
					}
					break;
					case 0:
					break;
					default:
					printf("\nEssa opcao nao existe\n");
				}
			return;
			break;
			case 5:
			printf("\nComprar Escudo?\n1 - Comfirmar\n2 - Voltar\n");
			scanf("%d",&t);
				switch(t){
					case 1:
					if(ouro >= 80){
						++*escudo;
						ouro -= 80;
					printf("\nVoce comprou o Escudo!!!\n");
					}
					else{
						printf("\nVoce nao tem Ouro suficiente\n");
					}
					break;
					case 0:
					break;
					default:
					printf("\nEssa opcao nao existe\n");
				}
			return;
			break;
			case 0:
			break;
			default:
			printf("\nTalvez em futuras atualizacoes\n");
		}
	}while(luja != 0);
	return;
}
void inventario(int inv[], int *ppi, int *pgi, int *espada, int *escudo, int *arm, int *hp, int *def, int *atq, int *hpm)
{
	int opcao_inv, inv_1, inv_2, inv_3, inv_4, inv_5;
	do{
		printf("\n1 - Porcao Pequena: %d\n2 - Porcao Grande: %d\n3 - Espada: %d\n4 - Escudo: %d\n5 - Armadura: %d\n0 - Voltar\n", *ppi, *pgi, *espada, *escudo, *arm);
		printf("\nEscolha: ");
		scanf("%d",&opcao_inv);
		switch(opcao_inv){
			case 1:
			do{
				printf("\n1 - Visualizar Item\n2 - Usar Item\n3 - Descartar Item\n0 - Voltar\n");
				printf("\nEscolha: ");
				scanf("%d",&inv_1);
				switch(inv_1){
					case 1:
					printf("\nRecupera 20 de vida\n\n");
					break;
					case 2:
					if(*ppi > 0){
					*hp += 20;
					*ppi -= 1;
						if(*hp > *hpm)
						{
							*hp = *hpm;
						}
					printf("\nVoce recuperou 20 de vida\n");}
					else{
					printf("\nVoce nao tem Porcao Pequena\n");}
					break;
					case 3:
					if(*ppi > 0){
					*ppi -= 1;
					printf("\nVoce descatou 1 item\n");}
					else{
					printf("\nVoce nao tem Porcao Pequena\n");}
					break;
					case 0:
					break;
					default:
					printf("\nEscolha umas das opcao acima\n");
				}
			}while(inv_1 != 0);
				return;
				break;
			
			case 2:
			do{
				printf("\n1 - Visualizar Item\n2 - Usar Item\n3 - Descartar Item\n0 - Voltar\n");
				printf("\nEscolha: ");
				scanf("%d",&inv_2);
				switch(inv_2){
					case 1:
					printf("\nRecupera 50 de vida\n\n");
					break;
					case 2:
					if(*pgi > 0){
					*hp += 50;
					*pgi -= 1;
						if(*hp > *hpm)
						{
							*hp = *hpm;
						}
					printf("\nVoce recuperou 50 de vida\n");}
					else{
					printf("\nVoce nao tem Porcao Grande\n");}
					break;
					case 3:
					if(*pgi > 0){
					*pgi -= 1;
					printf("\nVoce descatou 1 item\n");}
					else{
					printf("\nVoce nao tem Porcao Grande\n");}
					break;
					case 0:
					break;
					default:
					printf("\nEscolha umas das opcao acima\n");
				}
			}while(inv_2 != 0);
			return;
			break;
			
			case 3:
			do{
				printf("\n1 - Visualizar Item\n2 - Usar Item\n3 - Descartar Item\n0 - Voltar\n");
				printf("\nEscolha: ");
				scanf("%d",&inv_3);
				switch(inv_3){
					case 1:
					printf("\nAtaque +5\n\n");
					break;
					case 2:
					if(*espada > 0){
					*atq += 5;
					*espada -= 1;
					printf("\nVoce ganhou +5 de Ataque\n");}
					else{
					printf("\nVoce nao tem Espada\n");}
					break;
					case 3:
					if(*espada > 0){
					*espada -= 1;
					printf("\nVoce descatou 1 item\n");}
					else{
					printf("\nVoce nao tem Espada\n");}
					break;
					case 0:
					break;
					default:
					printf("\nEscolha umas das opcao acima\n");
					break;
				}
			}while(inv_3 != 0);
				return;
			break;
			case 4:
			do{
				printf("\n1 - Visualizar Item\n2 - Usar Item\n3 - Descartar Item\n0 - Voltar\n");
				printf("\nEscolha: ");
				scanf("%d",&inv_4);
				switch(inv_4){
					case 1:
					printf("\nEscudo +3\n\n");
					break;
					case 2:
					if(*escudo > 0){
					*def += 3;
					*escudo -= 1;
					printf("\nVoce ganhou +3 de Defesa\n");}
					else{
					printf("\nVoce nao tem Escudo\n");}
					break;
					case 3:
					if(*escudo > 0){
					*escudo -= 1;
					printf("\nVoce descatou 1 item\n");}
					else{
					printf("\nVoce nao tem Escudo\n");}
					break;
					case 0:
					break;
					default:
					printf("\nEscolha umas das opcao acima\n");
				}
			}while(inv_4 != 0);
				return;
				break;
			case 5:
			do{
				printf("\n1 - Visualizar Item\n2 - Usar Item\n3 - Descartar Item\n0 - Voltar\n");
				printf("\nEscolha: ");
				scanf("%d",&inv_5);
				switch(inv_5){
					case 1:
					printf("\nDefesa +5\n\n");
					break;
					case 2:
					if(*arm > 0){
					*def += 5;
					*arm -= 1;
					printf("\nVoce ganhou +5 de Defesa\n");}
					else{
					printf("\nVoce nao tem Armadura\n");}
					break;
					case 3:
					if(*arm > 0){
					*arm -= 1;
					printf("\nVoce descatou 1 item\n");}
					else{
					printf("\nVoce nao tem Armadura\n");}
					break;
					case 0:
					break;
					default:
					printf("\nEscolha umas das opcao acima\n");
				}
			}while(inv_5 != 0);
				return;
				break;
			case 0:
			break;
			default:
			printf("\nTalvez em futuras atualizacoes\n");
		}
	}while(opcao_inv != 0);
	return;
}
void descansar(int *hp, int *hpm)
{
	*hp += 25;
		if(*hp > *hpm)
	{
		*hp = *hpm;
	}
	printf("\nVoce entao decidir descansar\n");
}
void chefeFinal(int *hp, int atq, int def, int dhp, int datq, int *ouro, int *exp, int nivel, int *hpm, int *ppi, int *pgi)
{
	if(nivel > 5)
	{
		int opcao, curar;
		while(*hp > 0 && dhp > 0)
		{
			printf("\nSua vida: %d\nVida do DragaoGPT: %d\n", *hp, dhp);
			printf("\n1 - Atacar\n2 - Defender\n3 - Usar Item\n4 - Fugir\nEscolha: ");
			scanf("%d",&opcao);
			switch(opcao){
				case 1:
					dhp -= atq;
					printf("\nVoce causou %d de dano!\n",atq);
				break;
				case 2:
					*hp = datq/2;
					printf("\nVoce se defendeu!\n");
				break;
				case 3:
					printf("\nUsar qual Pocao\n1 - Pequena\n2 - Grande\n3 - Voltar\n");
					switch(curar){
						case 1:
						if(*ppi > 0){
						*hp += 20;
						*ppi -= 1;
							if(*hp > *hpm)
							{
								*hp = *hpm;
							}
						printf("\nVoce recuperou 20 de vida\n");
						}
						else{
						printf("\nVoce nao tem Porcao Pequena\n");
						}
						break;
						case 2:
							if(*pgi > 0){
						*hp += 50;
						*pgi -= 1;
						if(*hp > *hpm)
						{
							*hp = *hpm;
						}
						printf("\nVoce recuperou 50 de vida\n");
						}
						else{
						printf("\nVoce nao tem Porcao Grande\n");
						}
						break;
						case 3:
						break;
						default:
							printf("\nEscolha uma das opcao acima\n");
					}
				break;
				case 4:
					srand(time(NULL));
					int change = rand() % 100;
					if(change < 25)
					{
						printf("\nVoce fugiu!\n");
					return;
					}
					else{
						printf("\nSua fugar falou!\n");
					}
				break;
				default:
					printf("\nEssa opcao nao existe!\n");
			}
			if(dhp > 0)
			{
				int dano = datq - def;

				if(dano < 1)
					dano = 1;
				*hp -= dano;
				printf("DragaoGPT causou %d de dano!\n",dano);
			}
		}

		if(*hp <= 0)
		{
			printf("\nVoce morreu!\n");
		}
		else
		{
			printf("\nVoce derrotou o DragaoGPT!!!");
			*ouro += 20000;
			*exp += 30000;
		}
	}
	else
	{
		printf("\nVoce ainda e fraco!\n");
	}
}