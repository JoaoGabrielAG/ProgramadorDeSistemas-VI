#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int a = 0, b = 0, c = 0, maior_ab = 0, maior_abc;
	scanf("%d %d %d",&a,&b,&c);
	
	maior_ab = ((a+b+abs(a-b))/2);
	maior_abc = ((maior_ab+c+abs(maior_ab-c))/2);
	printf("%d eh o maior\n",maior_abc);
	return(0);
}