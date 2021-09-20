#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lowercase
 * Description: checks if an alphabet is 
 * lowercase
 * Return: returns 1 if correct and if its 
 * uppercase
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
