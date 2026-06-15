#include <stdio.h>

int main()
{
	double n = 0.0, n_2 = 0.0;
	char sinal;
	double resposta = 0;
	
	printf("Informe a operacao\n");
	scanf("%lf %c %lf",&n, &sinal, &n_2);
	
	switch(sinal)
	{	case"+":
		resposta = n + n_2;
		printf("= resposta%.10lf\n");
		break;
		case"-":
		resposta = n - n_2;
		printf("= resposta%.10lf\n");
		break;
		case"*":
		resposta = n * n_2;
		printf("= resposta%.10lf\n");
		break;
		case"/":
		resposta = n / n_2;
		printf("= resposta%.10lf\n");
		break;
		default:
		printf("Essa conta nao existe\n");
	}
	return(0);
}