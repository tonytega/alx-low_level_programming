#include <stdio.h>
/**
 * main - Entry point of code
 * Description: this is a function that prints
 * the alphabet
 * Return: returns #include <unistd.h>(0)
 */
int print_alphabet(char c);
int main(void)
{
	print_alphabet('c');
	putchar('\n');
 	return (0);	
}
int print_alphabet(char c)
{
	for (c = 'a'; c <= 'z';c++)
	{
	putchar(c);
	}
	return (0);
}
