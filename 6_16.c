//6_16.c

#include <stdio.h>
#include <string.h>
int main(void)
{
	float a ,b;
	int y;
	a=100;
	b=100;
	y=0;
	while(b<=a)
	{
		a+=10;
		b+=b*0.05;
		y++;
	}
	printf("After %d years, the return on investment of Deirdre($%.2f) will\
 over Daphne's($%.2f)\n", y, b, a);

	return 0;
}
