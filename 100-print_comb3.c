#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 1;

	while ( i < 10)
	{
	
		while (j < 10)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(',');
			putchar(' ');
			j++;
		}
		
	i++;
	j = 1 + i ;
	}
	return(0);	
}
