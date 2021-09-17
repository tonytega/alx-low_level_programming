#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point of code
 * Description: this is a function that prints
 * the alphabet
 * Return: returns #include <unistd.h>(0)
 */

int main(void)
{
	char c;
       for (c = 'a'; c <= 'z'; c++)
       {
	putchar(c);
	}
	putchar('\n');
 	return (0);	

}

