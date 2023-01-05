#include "main.h"
/**
 *_puts_recursion - prints string using recursion
 *@s: input string pointer
 *Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
	_putchar('\n');
	}
}
