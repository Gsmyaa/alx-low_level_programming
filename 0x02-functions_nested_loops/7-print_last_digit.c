#include "main.h"
/**
 *print_last_digit - pritnts the last digit
 *@n: input of a number to be evaluated
 *Return: the value
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	_putchar(i + '0');
	return (i);
}
