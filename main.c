#include <stdio.h>
#include <stdlib.h>
#include <C:\msys64\mingw64\include\libpq-fe.h>
// ALTERANDO: Agora o MSYS2 gerencia o cabeçalho globalmente

int main()
{
	// 1. Dados da sua conexão (Banco 'Estoque' e senha '123456' configurandos)
	const char *conninfo = "host=localhost port=5432 dbname=Estoque user=postgres password=admin";
	
	// 2. Tenta conectar ao banco
	PGconn *conn = PQconnectdb(conninfo);
	
	// Verifica se a conexão falhou
	if (PQstatus(conn) == CONNECTION_BAD)
	{
		fprintf(stderr, "Erro de conexão: %s\n", PQerrorMessage(conn));
		PQfinish(conn);
		return 1;
	}
	
	printf("Conectado ao PostgreSQL com sucesso!\n\n");
	
	// AJUSTE: É boa prática fechar a conexão antes do return
	// Para não deixar pendente no banco 
	PQfinish(conn);
	
	return 0;
}