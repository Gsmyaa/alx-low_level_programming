#include <main.h>
/**
 *main - print alphabet in lower case
 *Return: 0 value
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 *print_alphabet - a function that print lower case
 *
 *Return: void value
 */
void print_alphabet(void)
{
	char l = 'a';

	while (l < 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
	return (void);
}
