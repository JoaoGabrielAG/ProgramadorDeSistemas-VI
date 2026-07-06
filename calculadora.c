#include <stdio.h>

int mdc (int d , int e);
int mmc (int d, int e);
double soma(double a, double b);
double divisao(double a, double b);
double subtracao(double a, double b);
double potenciacao(double a, int b);
double multiplicacao(double a, double b);
double raizquadrada (double a);
int fat2(int d);
int fat(int d);
void segundograu (double a, double b, double c);
int moduludo(int a);
	
int main()
{
	int operacao = 0;
	double a, b, c;
	int d, e;
	double resposta;
	int resp;

do{
	printf("--------------------------------------------------------------------------------------------------------------\n");
	printf("|Bem vindo a Calculadora 1.0.................................................................................|\n");
	printf("|Escolha uma opcao pelo numero dela..........................................................................|\n");
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
			printf("Informe os numeros\n");
			scanf("%d %d",&d, &e);
			resp = mdc(d,e);
			printf("Resposta e: %d\n",resp);
		break;
		case 1:
			printf("Informe os numeros\n");
			scanf("%d %d",&d,&e);
			resp = mmc(d,e);
			printf("Resposta e: %d\n",resp);
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
			scanf("%lf",&a);
			resposta = raizquadrada(a);
			printf("Resposta e: %.5lf\n",resposta);
		break;
		case 8:
			printf("Informe o numero\nEx:5n!! = 15\n");
			scanf("%d",&d);
			resp = fat2(d);
			printf("Resposta e: %d\n",resp);
		break;
		case 9:
			printf("Informe o numero do fatorial\nEx:5n! = 120\n");
			scanf("%lf",&a);
			resposta = fat(d);
			printf("Resposta e: %d\n",resposta);
		break;
		case 10:
			printf("Informe a operacao de segundo grau\nEx:ax2 + bx + c\n");
			scanf("%lf %lf %lf",&a, &b, &c);
			segundograu(a,b,c);
		break;
		case 11:
		
		break;
		default:
		printf("Essa opcao nao existe, escolha outra\n");
	}
}while(operacao != 11);
	return(0);
}

int mdc (int d, int e)
{
	int resto;
    while (e != 0) {
        resto = d % e;
        d = e;
        e = resto;
    }
    return d;
}

int mmc (int d, int e)
{
	int resp;


	resp  = moduludo(d*e)/ mdc(d,e);
		

	return (resp);
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
	if(b != 0)
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
double raizquadrada (double a)
{
	double raiz, xk;
	xk = a;
	
	if(a < -1)
	{
		printf("nao ha solucao nos numeros reais\n");
	}
	else{
		for(int i = 0; i < 1000; i++)
		{
			raiz = 0.5*(xk + (a/xk));
			xk = raiz;
		}
	}
	return(raiz);
}
int fat2 (int d)
{
	int fat = 1;
	
	if(d%2 == 0)
	{
		for(int i = d; i > 0; i=i-2)
		{
			fat = fat * i;
		}
	}
	else
	{
		for(int i = d; i > 0; i=i-2)
		{
			fat = fat * i;
		}
	}
	
	return(fat);
}
int fat (int d)
{
	int fat = 1;
	if (d < 0){
		printf("não existe fatorial de 0 e negrativas\n");
	}
	else{
		for(int i = d; i > 0; i--)
		{
			fat = fat * i;
		}
	}
	return(fat);
}
void segundograu (double a, double b, double c)
{
	double r1, r2, delta, raiz;
	
	delta = (b*b)-(4*a*c);
	
	//xk = delta;
	
	raiz = raizquadrada(delta);

	if(raiz > 0.0 && a != 0)
	{
		r1 = (-b + raiz)/(2*a);
		r2 = (-b - raiz)/(2*a);
	}
	else
	{
		printf("Impossivel calcular\n");
	}
	printf("Resposta e: r1 = %.5lf r2 = %.5lf\n",r1,r2);
}
int moduludo(int a)
{
	if (a >= 0)
	{
		return(a);
	}
	else
	{
		return(-1*a);
	}	
}