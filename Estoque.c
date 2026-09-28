#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <C:\msys64\mingw64\include\libpq-fe.h>

int Cadastra();
int Imprimir();
int Apagar();
int Atualizar();

int main()
{
	system("chcp 65001");
	system("color a");
	int opcao;
	
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
				system("Exit");
			break;
			case(1):
				Cadastra();
			break;
			case(2):
				Imprimir();
			break;
			case(3):
				Apagar();
			break;
			case(4):
				Atualizar();
			break;
			default:
			printf("Essa opção não existir\n");
			break;
		}
	}while(opcao != 0);
	return 0;
	}

int Cadastra()
{
	const char *conninfo = "host=localhost port=5432 dbname=Estoque user=postgres password=admin";
	
	PGconn *conn = PQconnectdb(conninfo);
	
	if (PQstatus(conn) == CONNECTION_BAD)
	{
		fprintf(stderr, "Erro de conexão: %s\n", PQerrorMessage(conn));
		PQfinish(conn);
		return 1;
	}
	
	char produto[50];
	int quantidade = 0;
	double preco = 0.0;
	int tamanho = 0;
	PGresult *res = NULL;
	
	printf("Informe o nome do produto: ");
	scanf(" %[^\n]",produto);
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
	
	printf("Inserção realizada com sucesso!\n");
	free(sql);
	PQclear(res);
	PQfinish(conn);
}

int Imprimir()
{

	
	const char *conninfo = "host=localhost port=5432 dbname=Estoque user=postgres password=admin";
	
	PGconn *conn = PQconnectdb(conninfo);
	
	if(PQstatus(conn) != CONNECTION_OK) 
	{
		fprintf(stderr, "Error de conexão: %s\n", PQerrorMessage(conn));
		PQfinish(conn);
		return 1;
	}
	
	
	PGresult *res = PQexec(conn, "SELECT * FROM estoque;");
	
	int linhas = PQntuples(res);
	int colunas = PQnfields(res);
	
	if (PQresultStatus(res) != PGRES_TUPLES_OK) 
	{
		fprintf(stderr, "Erro na consulta: %s\n", PQerrorMessage(conn));
		PQclear(res);
		PQfinish(conn);
		return 1;
	}
	
	printf("\n----------------------TABELA-ATUAL----------------------\n");
	printf("Total de linhas %d\n", linhas);
	printf("Total de colunas %d\n", colunas);
	
	for(int j = 0; j < colunas; j++)
	{
		printf("%-20s", PQfname(res, j));
	}
	printf("\n--------------------------------------------------------\n");
	
	for(int i = 0; i < linhas; i++)
	{
		for(int j = 0; j < colunas; j++)
		{
			printf("%-20s", PQgetvalue(res, i, j));
		}
		printf("\n");
	}
	
	PQclear(res);
	PQfinish(conn);
	return 0;
}

int Apagar()
{
	Imprimir();
	
	int id;
	
	printf("Digite o ID do produto que deseja apagar: ");
	scanf(" %d",&id);
	
	char sql[200];
	const char *conninfo = "host=localhost port=5432 dbname=Estoque user=postgres password=admin";
	
	PGconn *conn = PQconnectdb(conninfo);
	
	if (PQstatus(conn) == CONNECTION_BAD)
	{
		fprintf(stderr, "Erro de conexão: %s\n", PQerrorMessage(conn));
		PQfinish(conn);
		return 1;
	}
	
	snprintf(sql, sizeof(sql), "DELETE FROM estoque WHERE id = %d;",id);
	
	PGresult *res = PQexec(conn, sql);
	
	if(PQresultStatus(res) != PGRES_COMMAND_OK)
	{
		fprintf(stderr, "Erro no DELETE: $s\n", PQerrorMessage(conn));
	}
	else
	{
		if(PQcmdTuples(res)[0] == '0')
		{
			printf("\nNenhum produto encontrado com esse Id\n");
		}
		else
		{
			printf("Produto apagado com sucesso!\n");
		}
	}
	
	PQclear(res);
	PQfinish(conn);
	
	printf("Estoque atualizado\n");
	Imprimir();
}

int Atualizar()
{
	Imprimir();
	
	int id;
	char produto[50];
	int quantidade;
	double preco;
	
	printf("\nDigite p Id do produto que deseja atualizar: ");
	scanf(" %d",&id);
	printf("\nNovo nome do produto: ");
	scanf("%[^\n]",produto);
	printf("\nNova quantidade: ");
	scanf(" %d",&quantidade);
	printf("\nNovo preço: ");
	scanf("%lf",&preco);
	
	char sql[500];
	const char *conninfo = "host=localhost port=5432 dbname=Estoque user=postgres password=admin";
	
	PGconn *conn = PQconnectdb(conninfo);
	
	if (PQstatus(conn) == CONNECTION_BAD)
	{
		fprintf(stderr, "Erro de conexão: %s\n", PQerrorMessage(conn));
		PQfinish(conn);
		return 1;
	}
	
	snprintf(sql, sizeof(sql), "UPDATE estoque SET produto = '%s', quantidade = %d, preco_unitario = %lf WHERE id = %d;", produto, quantidade, preco, id);
	
	PGresult *res = PQexec(conn, sql);
	
	if(PQresultStatus(res) != PGRES_COMMAND_OK)
	{
		fprintf(stderr, "Erro no UPDATE: %s\n", PQerrorMessage(conn));
	}
	else
	{
		if(PQcmdTuples(res)[0] == '0')
		{
			printf("Nenhum produto encontrado com esse Id\n");
		}
		else 
		{
			printf("Produto atualizado com sucesso!\n");
		}
	}
	
	PQclear(res);
	PQfinish(conn);
	
	printf("Estoque atualizado\n");
	Imprimir();
}