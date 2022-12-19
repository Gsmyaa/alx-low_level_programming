#include "main.h"
/**
 *print_rev - print string in reverse
 *@s: input
 *Return: void
 */
void print_rev(char *s)
{
	int l = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		l += 1;
	}
	for (j = l - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
