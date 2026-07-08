#include <stdio.h>

int main()
{
	int numero = 50;
	int *ptr = &numero;
	printf("O Valor da variavel: %d\n", numero);
	printf("O Endereco de memoria de: %x\n", &numero);
	printf("O Valor armazenando no ponteiro: %x\n", ptr);
	printf("O conteudo apontado por: %d\n", *ptr);
	
	return 0;
}