#include "main.h"
/**
 *print_last_digit - pritnts the last digit
 *@n: input of a number to be evaluated
 *Return: the value
 */
int print_last_digit(int n)
{
	int i;

	if (n >= 0)
	{
		i = n % 10;
		_putchar((i % 10) + '0');
		return (i % 10);
	}
	else
	{
		int a;

		a = (-1) * n;
		i = a % 10;
		_putchar((i % 10) + '0');
		return (i % 10);
	}
}
