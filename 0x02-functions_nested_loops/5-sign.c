#include <stdio.h>
#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: parameter to be checked
 *
 * Description: tells you the sign of number
 * Return: returns 1 if positive, 0 if zero
 * and -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
	putchar('+');
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
