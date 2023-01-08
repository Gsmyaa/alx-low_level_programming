#include "main.h"
/**
 *_print_rev_recursion - reverse
 *@s: input
 *Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	putchar(*s);
}
