#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int ld = n%9;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("The last digit of %c is\n",n);
		if (ld>5)
		{
		printf("%c is greater than 5\n", ld);
		}else if (ld==0)
		{
		printf("%c is 0\n");
		}else (ld<0 && ld != 0)
		{
		printf("%c is less than 6 and not 0\n", ld);
	return (0);
}
