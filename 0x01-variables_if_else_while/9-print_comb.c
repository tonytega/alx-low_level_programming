#include <stdio.h>
/**
 * main - entry point of code
 * Description: Print all single-digit
 * numbers followed by a "," and a space
 * Return: returns 0
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i < '9')
		{
		putchar(',');
		putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
