#include <stdio.h>
/**
 * main - Entry point
 * Description: prints letters in the alphabetr without
 * printing q and e
 * Return: returns 0 if sucessful
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		if (i != 'e' && i != 'q')
		{
		putchar(i);
		}
	}
	putchar('\n');
	return (0);

}
