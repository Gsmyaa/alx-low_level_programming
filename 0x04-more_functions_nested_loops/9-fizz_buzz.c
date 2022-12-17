#include "main.h"
#include <stdio.h>
/**
 *main - print number 0 - 10
 *Return: int
 */

int main(void)
{
	int n, i, j;

	for (n = 1; n <= 100; n++)
	{
		i = n % 3;
		j = n % 5;
		if ((i == 0) && (j == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i == 0)
		{
			printf("Fizz ");
		}
		else if (j == 0)
		{
			printf("Buzz ");
		}
		else
		{
			if (n == 100)
			{
				printf("%d", n);
			}
			else
			{
				printf("%d ", n);
			}
		}
	}
	printf("\n");
	return (0);
}
