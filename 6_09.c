#include <stdio.h>
#include <string.h>
float res(float a, float b);
int main(void)
{
	float a, b;

	do
	{
		printf("Enter two floats: ");
		fflush(stdin);
	}while(scanf("%f %f", &a, &b) != 2);
	
	
	printf("(%.3g + %.3g) / (%.2g * %.3g) = %.3g\n", a, b, a, b, res(a, b));

	return 0;
}
float res(float a, float b)
{
	return (a+b)/(a-b);
}