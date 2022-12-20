#include "main.h"
#include <stdio.h>
/**
 *print_array - print n element of array of integer
 *@a: input array
 *@n: input intiger
 *Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d", a[i]);
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
