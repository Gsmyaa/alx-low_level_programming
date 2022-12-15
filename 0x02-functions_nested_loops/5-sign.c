#include "main.h"
/**
 *print_sign - prints a sign of a number
 *@n: is a number to be checked
 *Return: 1 if pos, otherwise 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(n + '0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
