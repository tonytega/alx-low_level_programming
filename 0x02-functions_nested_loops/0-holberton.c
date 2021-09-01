# include <unistd.h>
int _putchar(char *c);
int main(void)
{
	_putchar("holberton");
	return (0);
}
int _putchar(char *c)
{
	return (write(1, &c, 1));
}
