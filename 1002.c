#include <stdio.h>
 
int main() {
 
    double n = 3.14159;
    double a = 0.0;
    double r = 0.0;
    
    scanf("%lf",&r);
    a=n*(r*r);

	printf("A=%.4lf\n",a);
    
    return 0;
}