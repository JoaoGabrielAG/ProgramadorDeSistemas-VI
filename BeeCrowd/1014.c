#include <stdio.h>

int main ()
{
	int x = 0;
	float y = 0;
	float km = 0;
	
	scanf("%d\n%f",&x,&y);
	km = x/y;
	
	printf("%.3f km/l\n",km);
	return(0);
}