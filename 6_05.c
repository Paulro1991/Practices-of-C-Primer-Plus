#include <stdio.h>
int main(void)
{
	int i, j, k;
	char ch, start;

	printf("Enter a CAPITAL letter: \n");
	scanf("%c", &ch);

	int row = ch - 'A' + 1;

	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= row - i; j++)
			printf(" ");

		for (k = 1, start = 'A'; k <= i; k++, start++)
			printf("%c", start);

		for (k -= 2, start -= 2; k > 0; k--, start--)
			printf("%c", start);

		printf("\n");
	}	

	return 0;
}