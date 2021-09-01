# include <unistd.h>
int _putchar(char c);
int main(void)
{
	char c = "_putchar";
	putchar("%d\n", c);
	return (0);
}
int _putchar(char c)
{
	return (write(1, &c, 1));
}
