#include "main.h"
/**
 *jack_bauer - print every minute of day
 *@int: input
 *Return: void
 *
 */
void pass1(int);
void pass2(int);
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; i++)
	{
		if (i == 2)
		{
			pass1(i);
		}
		else
		{
			pass2(i)
		}
	}
}
/**
 *pass1 - it takes value of 2
 *@i: iput fro main
 *Return: void
 */
void pass1(int i)
{
	for (j = 0; j <= 3; j++)
	{
		for (k = 0; k <= 5; k++)
		{
			for (l = 0; l <= 9; l++)
			{
				_putchar(i + '0');
				_putchar(j + '0');
				_putchar(':');
				_putchar(k + '0');
				_putchar(l + '0');
				_putchar('\n');

			}
		}
	}
}
/**
 *pass2 - it takse value otherthan 2
 *@i: input value from main
 *Return: void
 */
void pass2(int i)
{
	for (j = 0; j <= 9; j++)
	{
		for (k = 0; k <= 5; k++)
		{
			for (l = 0; l <= 9; l++)
			{
				_putchar(i + '0');
				_putchar(j + '0');
				_putchar(':');
				_putchar(k + '0');
				_putchar(l + '0');
				_putchar('\n');
			}
		}
	}
}
