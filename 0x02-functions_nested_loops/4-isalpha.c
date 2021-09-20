#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 *_isalpha - checks for lowercase
 * Description: checks for alphabetic characters
 * @c: This is the parameter to be checked
 * Return: returns 1 if its a letter,lowercase
 * or uppercase and returns 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);				}
}
