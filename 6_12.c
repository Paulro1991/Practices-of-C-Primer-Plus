#include <stdio.h>
int main(void)
{
	float a, b, c, d, f, e, g;
	printf("Enter the last number:\n");
	scanf("%f", &b);	

	for (a = 1.0; a <= b; a++)
		c += 1.0/a;

	for (d = 2.0, f = 1.0; d <= b; d += 2, f += 2)
	{
		e += 1.0/f;
		g -= 1.0/d;
	}

	printf("First result: %f\n", c);
	printf("Second result: %f\n", e+g);
	printf("Result:%f\n",c+e+g);

	return 0;
}