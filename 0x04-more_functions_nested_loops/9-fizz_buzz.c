#include "main.h"
/**
 *main - print number 0 - 10
 *Return: int
 */

int main(void)
{
	int n, i, j;

	for (n = 0; n < 100; n++)
	{
		i = n % 3;
		j = n % 5;
		if ((i == 0) && (j == 0))
		{
			printf("FizzBuzz");
		}
		else if (i == 0)
		{
			printf("Fizz");
		}
		else if (j == 0)
		{
			printf("Buzz");
		}
		else
		{
			_putchar(n + '0');
		}
		_putchar(' ');
	}
}
