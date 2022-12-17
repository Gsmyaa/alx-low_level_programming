#include "main.h"
/**
 *times_table - print the 9 times table
 *Return: void value
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k > 9)
			{
				if (j == 9)
				{
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else
				{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
				_putchar(',');
				_putchar(' ');
				}
			}
			else
			{
				if (j == 9)
				{
					_putchar(k + '0');
				}
				else
				{
					_putchar(k + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
