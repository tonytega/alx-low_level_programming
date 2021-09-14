#include <stdio.h>
/**
 * main- entry point of program
 * Description: This program prints the alphabet in
 * lower case and upper casee using putchar
 * Return: 0 if successfull
 **/
int main(void)
{
	 char i;
	 char j;

        for (i = 'a'; i <= 'z' ; i++)
	{
              putchar(i);
	}

	for (j = 'A'; j <= 'Z' ; j++)
	{
             putchar(j);
	}
	putchar('\n');
	return (0);
}
