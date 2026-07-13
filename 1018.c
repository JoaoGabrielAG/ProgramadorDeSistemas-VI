#include <stdio.h>

int main ()
{
	int n, vet[7] = {100,50,20,10,5,2,2};
	scanf("%d",&n);
	for(int i = 0; i < 1000; i++)
	{
		printf("%d",n);
		n%vet[7];
		n%vet[6];
		n%vet[5];
		n%vet[4];
		n%vet[3];
		n%vet[2];
		n%vet[1];
	}
	return(0);
}