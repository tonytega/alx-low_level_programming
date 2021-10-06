#include <stdio.h>
#include "main.h"

void jack_bauer(void)
{
	char a ='0';
	char b ='0';
	char c = '0';
	char d = '0';
	while ( a <= '2')
	{
	
		while ( d <= '9' )
		{
		putchar(a);
		putchar(b);
		putchar(':');
		putchar(c);
		putchar(d);
		putchar('\n');
		d++;
		}
		while (c <='5')
		{
		if (d > '9')
		{
			char d = '0';
			char c = '1';
		}
		putchar(a);
		putchar(b);
		putchar(':');
		putchar(c);
		putchar(d);
		d++;
		if (d > 9)
		{
			c++;
		}

		 }

}
}

	
