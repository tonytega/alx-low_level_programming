#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ld = n%10;
	printf("The last digit of %d is\n",n,);
		if (ld>5)
		{
		printf("%d is greater than 5\n", ld);
		}else if (ld==0)
		{
		printf("%d is 0\n");
		}else (ld<0 && ld != 0)
		{
		printf("%d is less than 6 and not 0\n", ld);
	return (0);
}
