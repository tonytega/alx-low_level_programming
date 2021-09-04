#include <stdio.h>
/**
 * main- entry point of program
 * Description: This program prints the alphabet in
 * lower case using lowercase
 * Return: 0 if successfull
 **/
int main()
{
	char n[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	for(i = 0; i < 28;i = i+1)
	{
	putchar("%c", n[i] );
	}
	return (0);
}
