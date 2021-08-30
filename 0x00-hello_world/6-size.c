#include <stdio.h>
/**
 * main - Print size of differnt data types
 * Description: This prints the size of various data types e.g char
 * Return: 0 show it executed without error
 */
int main(void)
{
	printf("Size of a char: %c byte(s)\n", sizeof(char));
	printf("Size of an int: %c byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long));
	printf("Size of a float: %c byte(s)\n", sizeof(float));
	return (0);
}
