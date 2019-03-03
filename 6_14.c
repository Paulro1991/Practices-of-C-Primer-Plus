#include <stdio.h>
#define SIZE 8
int main(void)
{
	double num1[SIZE], num2[SIZE], sum;
	printf("Enter %d floats to num1: \n", SIZE);

	int i, j, k;
	for(i=0, j=0; i<SIZE; i++, j++)
	{	
		scanf("%lf", &num1[i]);
		sum += num1[i];
		num2[j] = sum;
	}


	for(k=0; k<SIZE; k++)
		printf("%8.2lf ", num1[k]);
	printf("\n");
	for(k=0; k<SIZE; k++)
		printf("%8.2lf ", num2[k]);
	

	return 0;
}