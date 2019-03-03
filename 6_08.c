#include <stdio.h>
#include <string.h>
int main(void)
{
	float a, b;

	do
	{
		printf("Enter two floats: ");
		fflush(stdin);
	}while(scanf("%f %f", &a, &b) != 2);
	
	
	printf("(%.3g + %.3g) / (%.2g * %.3g) = %.3g\n", a, b, a, b, (a+b)/(a-b));

	return 0;
}