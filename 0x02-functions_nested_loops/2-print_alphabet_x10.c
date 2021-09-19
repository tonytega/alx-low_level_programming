#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 * Description: This is a function that
 * prints the alphabet ren times
 */

void print_alphabet_x10(void)
{
	int i = 1;
	char c;

	while (i < 11)
	{
		for (c = 'a' ; c <= 10 ; c++)
		{
			putchar(c);
		}
		putchar('\n');
		i++;
	}
}
