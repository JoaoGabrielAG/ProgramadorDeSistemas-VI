#include <stdio.h>

int main()
{
	double a = 0.0, b = 0.0, c = 0.0, delta = 0.0, r1 = 0.0, r2 = 0.0, raiz = 0.0, xk = 0.0;
	
	scanf("%lf %lf %lf",&a, &b, &c);
	delta = (b*b)-(4*a*c);
	
	xk = delta;
	
	for(int i = 0; i < 1000; i++)
	{
		raiz = 0.5*(xk + (delta/xk));
		xk = raiz;
	}

	
	if(raiz > 0.0 && a != 0)
	{
		r1 = (-b + raiz)/(2*a);
		r2 = (-b - raiz)/(2*a);
		printf("R1 = %.5lf\nR2 = %.5lf\n",r1, r2);
	}
	else
	{
		printf("Impossivel calcular\n");
	}
	
	return(0);
}