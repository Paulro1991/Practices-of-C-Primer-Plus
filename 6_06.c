#include <stdio.h>
int main(void)
{
	int a, b, i;
	printf("Enter a lower limit integer: ");
	scanf("%d", &a);
	printf("Enter a upper limit integer: ");
	scanf("%d", &b);


	for (i = a; i<=b; i++ )
		printf("interger: %5d %5d %5d\n",i, i*i, i*i*i);

	return 0;
}