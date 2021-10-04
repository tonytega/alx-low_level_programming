#include <stdio.h>
#include "main.h"

void jack_bauer(void)
{
	char a ='0';
	char b ='0';
	char c = '0';
	char d = '0';

	while (a <= '2')
	{
		while (b <= '3')
		{
			while (c <= '5')
			{
				while (d <= '9')
				{
					putchar(a);
					putchar(b);
					putchar(':');
					putchar(c);
					putchar(d);
					putchar('\n');
					d++;		
				}
				putchar(a);
				putchar(b);
				putchar(':');
				putchar(c);
				putchar(d);
				putchar('\n');
				c++;
			}
			putchar(a);
			putchar(b);
			putchar(':');
			putchar(c);
			putchar(d);
			b++;
		}
		putchar(a);
		putchar(b);
		putchar(':');
		putchar(c);
		putchar(d);
		a++;
	}
}
