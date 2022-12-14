#include "main.h"
/**
 *main - call function
 *Return: 0 value
 */
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
