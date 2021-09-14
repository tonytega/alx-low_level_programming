# include <stdio.h>
/**
 * main - entry point of code
 * Description: print all digit of base 10
 * using only putchar
 * Return: returns 0
 */
int main(void)
{
	int i = 0;
	while(i < 10)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

