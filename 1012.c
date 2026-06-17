#include <stdio.h>

int main()
{
	double a = 0.0, b = 0.0, c = 0.0, pi = 3.14159;
	double tri = 0.0, cir = 0.0, tra = 0.0, qua = 0.0, ret = 0.0;
	
	scanf("%lf %lf %lf",&a, &b, &c);
	
	tri = ((a*c)/2);
	cir = ((c*c)*pi);
	tra = (((a+b)*c)/2);
	qua = b*b;
	ret = a*b;
	
	printf("TRIANGULO: %.3lf\n CIRCULO: %.3lf\n TRAPEZIO: %.3lf\n QUADRADO: %.3lf\n RETANGULO: %.3lf\n",tri, cir, tra, qua, ret);
	return(0);
}