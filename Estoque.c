#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <C:\msys64\mingw64\include\libpq-fe.h>
// ALTERANDO: Agora o MSYS2 gerencia o cabeçalho globalmente


int Imprimir(PGconn *conn);

int main()
{
	system("chcp 65001");
	system("color a");
	int opcao;
	
	const char *conninfo = "host=localhost port=5432 dbname=Estoque user=postgres password=admin";
	
	PGconn *conn = PQconnectdb(conninfo);

	if (PQstatus(conn) == CONNECTION_BAD)
	{
		fprintf(stderr, "Erro de conexão: %s\n", PQerrorMessage(conn));
		PQfinish(conn);
		return 1;
	}
	
	printf("Conectado ao PostgreSQL com sucesso!\n\n");
	
	do{
		printf("||===========================||\n");
		printf("||~~~~~~~~~~Estoque~~~~~~~~~~||\n");
		printf("||===========================||\n");
		printf("||=COD=||====================||\n");
		printf("||~~1~~||~~Cadastra~produto~~||\n");
		printf("||~~2~~||~~~~Ver~produtos~~~~||\n");
		printf("||~~3~~||~~~Apagar~produto~~~||\n");
		printf("||~~4~~||~~Atualizar~listar~~||\n");
		printf("||~~0~~||~~~~~~~~Sair~~~~~~~~||\n");
		printf("||===========================||\n");
		printf("Informe a opcao\n");
		scanf("%d",&opcao);
		switch(opcao)
		{
			case(0):
			break;
			case(1):
				Imprimir(conn);
			break;
			case(2):
			break;
			case(3):
			break;
			case(4):
			break;
			default:
			printf("Essa opção não existir\n");
			break;
		}
	}while(opcao = 0);
	return 0;
	}

int Imprimir(PGconn *conn)
{
	char produto[20];
	int quantidade = 0;
	double preco = 0.0;
	int tamanho = 0;
	PGresult *res = NULL;
		
	printf("Informe o nome do produto: ");
	scanf("%s",produto);
	printf("\nInforme a quantidade do produto: ");
	scanf("%d",&quantidade);
	printf("\nInforme o preço do produto: ");
	scanf("%lf",&preco);
	printf("\n");
	
	tamanho = snprintf(NULL, 0,"INSERT INTO estoque (produto, quantidade, preco_unitario) VALUES ('%s', %d, %lf);",produto, quantidade, preco);
	tamanho = (tamanho + 1);
	
	char *sql = malloc(tamanho *sizeof(char));
	
	sprintf(sql,"INSERT INTO estoque (produto, quantidade, preco_unitario) VALUES ('%s', %d, %lf);",produto, quantidade, preco);
	res = PQexec(conn, sql);
	
	if(PQresultStatus(res) != PGRES_COMMAND_OK){
		fprintf(stderr, "ERROR no INSERT: %s\n", PQerrorMessage(conn));
		PQclear(res);
		PQfinish(conn);
		return 1;
	}
	
	printf("Insercao realizada com sucesso!\n");
	free(sql);
	PQclear(res);
	//PQfinish(conn);
}
	