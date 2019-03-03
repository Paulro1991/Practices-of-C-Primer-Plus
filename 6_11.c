#include <stdio.h>
#define SIZE 8
int main(void)
{
	int num[SIZE];
	int i, j;
	printf("Please enter %d integers\n", SIZE);
	for (i=0; i<SIZE; i++)
		scanf("%d", &num[i]);
	printf("Here, in reverse order, are the values you entered:\n");
	for (j=SIZE-1; j>=0; j--)
		printf("%d\n", num[j]);
	printf("Done\n");
	return 0;

}

