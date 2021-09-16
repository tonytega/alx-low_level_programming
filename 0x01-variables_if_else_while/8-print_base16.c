# include <stdio.h>
/**
 * main - entry point of code
 * Description: prints all the numbers of
 * base16 in lowercase
 * Return: returns 0
 */
int main(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}

	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
