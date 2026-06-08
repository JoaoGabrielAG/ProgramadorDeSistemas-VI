#include <stdio.h>

int main()
{
	double nota_1 = 0.0;
	double nota_2 = 0.0;
	double nota_3 = 0.0;
	double final = 0.0;
	
	scanf("%lf",&nota_1);
	scanf("%lf",&nota_2);
	scanf("%lf",&nota_3);
	
	final=((nota_1*2.0)+(nota_2*3.0)+(nota_3*5.0))/10.0;
	printf("MEDIA = %.1lf\n",final);
	
	return(0);
}