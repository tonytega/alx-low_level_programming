#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of code
 * Description: this is a function that prints
 * the alphabet
 * Return: returns #include <unistd.h>(0)
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	putchar('\n');
 	return (0);	
}
void print_alphabet(void)
{
	char c= 'a';

	for (c = 'a'; c <= 'z';c++)
	{
	putchar(c);
	}
}
