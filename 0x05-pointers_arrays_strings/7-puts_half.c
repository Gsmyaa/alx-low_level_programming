#include "main.h"
/**
 *puts_half - print half of string
 *@str: input
 *Return: void
 */
void puts_half(char *str)
{
	int i, n, l = 0;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		l += 1;
	}
	if (l % 2 == 0)
	{
		for (i = l / 2; i < l; i++)
		{
			_putchar(str[i];
		}
	}
	else
	{
	n = (l - 1) / 2;
	for (i = n; i < l; i++)
	{
	_putchar(str[i]);
	}
	}
	_putchar('\n');
}
