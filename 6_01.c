#include <stdio.h>
#define SIZE 26
int main(void)
{
	char letter[SIZE];
	char element;
	int index;
	for (index = 0, element = 'a'; index < SIZE; index++, element++)
		letter[index] = element;
	for (index = 0; index < SIZE; index++)
		printf("%-2c", letter[index]);
	return 0;
}