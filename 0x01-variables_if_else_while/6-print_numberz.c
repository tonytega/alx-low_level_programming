# include <stdio.h>
/**
 * main - entry point of code
 * Description: print all digit of base 10
 * using only putchar
 * Return: returns 0
 */
int main(void)
{
	int i = 48;
	while(i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

