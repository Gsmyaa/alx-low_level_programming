#include "main.h"
/**
 *print_alphabet - a function that print lower case
 *
 *Return: void value
 */
void print_alphabet(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
