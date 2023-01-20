#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers - prints numbers
 *@separator: input string
 *@n: input paramaters
 *Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;
	va_list lists;

	if (separator == NULL)
		return;
	va_start(lists, n);
	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			j = va_arg(lists, int);
			printf("%d%s", j, separator);
		}
		else
		{
			j = va_arg(lists, int);
			printf("%d", j);
		}
	}
	printf("\n");
}
