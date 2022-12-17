#include "main.h"
/**
 *print_to_98 - print natural number n to 98
 *@n: input
 *Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; n < 98; i--)
		{
			if (i == 98)
			{
				printf("%d", i);
			}
			else
			{
				printf("%d", i);
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; n > 98; i++)
		{
			if (i == 98)
			{
				printf("%d", i);
			}
			else
			{
				printf("%d", i);
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
