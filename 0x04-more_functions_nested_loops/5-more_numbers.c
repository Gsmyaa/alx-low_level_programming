#include "main.h"
/**
 *more_numbers - print 10 times the numbers 0-14
 *Return: nothing
 */

void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
		}
	_putchar('\n');
	i++;
	}
}
