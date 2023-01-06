#include "main.h"
/**
 *_print_rev_recursion - reverse
 *@s: input
 *Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s && *s !=\n)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
