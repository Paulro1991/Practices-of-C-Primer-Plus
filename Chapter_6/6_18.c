//6_18.c

#include <stdio.h>
#define DUNBAR 150
int main(void)
{
	int friend, week;

	for(friend=5, week=0; friend<=DUNBAR;week++, friend-=week, friend*=2)
	{
		printf("week\tfrined\t\n");
		printf("%d\t%d\n",week, friend);
	}

	printf("\nAfter %d weeks, Dr.Rabnud's friends number(%d) will\
 over the Dunbar's number(%d).", week, friend, DUNBAR);

	return 0;
}
