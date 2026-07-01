#include <stdio.h>

double soma(double a, double b);
double divisao(double a, double b);
double subtracao(double a, double b);
double potenciacao(double a, int b);
double multiplicacao(double a, double b);
	
int main()
{
	int operacao = 0;
	double a, b;
	double resposta;
	double x, xd;

	printf("--------------------------------------------------------------------------------------------------------------\n");
	printf("|Bem vindo a Calculadora 1.0.................................................................................|\n");
	printf("|Escolha uma opcao...........................................................................................|\n");
	printf("--------------------------------------------------------------------------------------------------------------\n");
	printf("| 0 - MDC....................................................................................................|\n");
	printf("| 1 - MMC....................................................................................................|\n");
	printf("| 2 - Soma...................................................................................................|\n");
	printf("| 3 - Divisao................................................................................................|\n");
	printf("| 4 - Subtracao..............................................................................................|\n");
	printf("| 5 - Potenciacao............................................................................................|\n");
	printf("| 6 - Multiplicacao..........................................................................................|\n");
	printf("| 7 - Raiz Quadrada..........................................................................................|\n");
	printf("| 8 - Fatorial Duplo (N!!) ..................................................................................|\n");
	printf("| 9 - Fatorial Simples (N!) .................................................................................|\n");
	printf("| 10 - Equacao do Segundo Grau...............................................................................|\n");
	printf("| 11 - Sair..................................................................................................|\n");
	printf("--------------------------------------------------------------------------------------------------------------\n");
	scanf("%d",&operacao);
	
	switch(operacao)
	{
		case 0:
			/*printf("Informe o numero\n");
			scanf("%lf %lf",&a, &b);
			resposta = mdc(a,b);
			printf("Resposta e: %.5lf\n",resposta);*/
		break;
		case 1:
			/*printf("Informe a operacao de multiplicacao\nEx:10.0 * 2.0\n");
			scanf("%lf %lf",&a, &b);
			resposta = mmc(a,b);
			printf("Resposta e: %.5lf\n",resposta);*/
		break;
		case 2:
			printf("Informe a operacao de soma\nEx:10.0 + 2.0\n");
			scanf("%lf %lf",&a, &b);
			resposta = soma(a,b);
			printf("Resposta e: %.5lf\n",resposta);
		break;
		case 3:
			printf("Informe a operacao de divisao\nEx:10.0/2.0\n");
			scanf("%lf %lf",&a, &b);
			resposta = divisao(a,b);
			printf("Resposta e: %.5lf\n",resposta);
			
		break;
		case 4:
			printf("Informe a operacao de subtracao\nEx:10.0 - 2.0\n");
			scanf("%lf %lf",&a, &b);
			resposta = subtracao(a,b);
			printf("Resposta e: %.5lf\n",resposta);
		break;
		case 5:
			printf("Informe a operacao de potenciacao\nEx:10 ^ 2\n");
			scanf("%lf %lf",&a, &b);
			resposta = potenciacao(a,b);
			printf("Resposta e: %.5lf\n",resposta);
		break;
		case 6:
			printf("Informe a operacao de multiplicacao\nEx:10.0 * 2.0\n");
			scanf("%lf %lf",&a, &b);
			resposta = multiplicacao(a,b);
			printf("Resposta e: %.5lf\n",resposta);
		break;
		case 7:
			printf("Informe a raiz\nEx:√100\n");
			scanf("%lf",&a,);
			resposta = multiplicacao(a,b);
			printf("Resposta e: %.5lf\n",resposta);
		break;
		case 8:
			/*printf("Informe a operacao de multiplicacao\nEx:10.0 * 2.0\n");
			scanf("%lf %lf",&a, &b);
			resposta = fatorialduplo(a,b);
			printf("Resposta e: %.5lf\n",resposta);*/
		break;
		case 9:
			/*printf("Informe a operacao de multiplicacao\nEx:10.0 * 2.0\n");
			scanf("%lf %lf",&a, &b);
			resposta = fatorialsimples(a,b);
			printf("Resposta e: %.5lf\n",resposta);*/
		break;
		case 10:
			/*printf("Informe a operacao de multiplicacao\nEx:10.0 * 2.0\n");
			scanf("%lf %lf",&a, &b);
			resposta = segundograu(a,b);
			printf("Resposta e: %.5lf\n",resposta);*/
		break;
		case 11:
			/*calculadora.c && exit;*/
		break;
		default:
		printf("Essa opcao nao existe, escolha outra\n");
	}
	return(0);
	
}


double soma(double a, double b)
{
	double c = 0.0;
	c = a + b;
	return(c);
}
double divisao(double a, double b)
{
	double c = 0.0;
	if(a != 0)
	{
		c = a / b;
	}
	else
	{
		printf("Nao existe divisao por 0\n");
	}
	return(c);
}
double subtracao(double a, double b)
{
	double c = 0.0;
	c = a - b;
	return(c);
}
double potenciacao(double a, int b)
{
	double c = 0.0;
	if(b != 0)
	{
		for(int i = 0; i < b; i++)
		{
		c = a * a;
		}
	}
	else
	{
		c = 1;
	}
	return(c);
}
double multiplicacao(double a, double b)
{
	double c = 0.0;
	c = a * b;
	return(c);
}
double raizquadrada (double x, double xd)
{
	double c = 0.0;
	xk = x;
	
	for(int i = 0; i < 100; i++)
	{
		c = 0.5*(xk + (x/xk));
		xk = c;
	}
	return(c);
}