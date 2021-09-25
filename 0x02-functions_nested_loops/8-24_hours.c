#include <stdio.h>
#include "main.h"

void jack_bauer(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	while (a <= 2)
	{
		while (b <= 3)
		{
			while (c <= 5)
			{
				while (d <= 9)
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
