# include <stdio.h>
/**
 * main - entry point of code
 * Description: prints all the numbers of
 * base16 in lowercase
 * Return: returns 0
 */
int main(void)
{
	int i = 1;
	char j;

	while (i < 10)
	{
		putchar(i);
		i++;
	}

	for (j = 'a'; j <= 'f';)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
