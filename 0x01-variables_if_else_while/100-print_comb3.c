#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible different combinations of two digits.
 * @parameter: takes nothing
 *
 * Return: 0 always
 */
int main(void)
{
	int i = 0;
	int j = 1;

	while (i < 10)
	{
		while (j < 10)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i < 8 || j < 9)
			{
			putchar(',');
			putchar(' ');
			}
			j++;
		}
	i++;
	j = 1 + i;
	}
	putchar('\n');
	return (0);
}
