#include <stdio.h>

int main ()
{
	int r = 0;
	double pi = 3.14159;
	double esfera = 0.0;
	
	scanf("%d",&r);
	esfera = (4.0/3)*pi*(r*r*r);
	
	printf("VOLUME = %.3lf\n",esfera);
	
	return(0);
}