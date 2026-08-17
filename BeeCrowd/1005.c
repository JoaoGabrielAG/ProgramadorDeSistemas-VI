#include <stdio.h>

int main()
{
	double nota_1 = 0.0;
	double nota_2 = 0.0;
	double final = 0.0;
	
	scanf("%lf",&nota_1);
	scanf("%lf",&nota_2);
	
	final=((nota_1*3.5)+(nota_2*7.5))/11.0;
	printf("MEDIA = %.5lf\n",final);
	
	return (0);
}