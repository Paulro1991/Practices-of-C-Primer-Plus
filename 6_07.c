#include <stdio.h>
#include <string.h>
int main(void)
{
	char word[40];
	printf("Enter a word: ");
	scanf("%s", &word);

	int len = strlen(word);

	int i = len-1;

	for (i; i>=0; i--)
		printf("%c", word[i]);

	return 0;
}