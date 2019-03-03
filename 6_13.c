#include <stdio.h>
#include <math.h>
#define SIZE 8

int main(void)
{
	int num[SIZE];
	int i;
	int j=0;

	for (i=0; i<SIZE; i++)
		num[i] = pow(2, i);
	
	do{
		printf("%5d", num[j]);
	}while(++j<8);

	return 0;
}