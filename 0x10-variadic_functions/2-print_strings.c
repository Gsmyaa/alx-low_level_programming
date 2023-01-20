#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_strings - prints strings
 *@separator: input string
 *@n: input count
 *Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lists;
	char *ar;

	if (separator == NULL)
		return;
	va_start(lists, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(lists, int))
		{
			if (i < n - 1)
			{
				ar = va_arg(lists, char *);
				printf("%s%s", ar, separator);
			}
			else
			{
				ar = va_arg(lists, char *);
				printf("%s", ar);
			}
		}
		else
			printf("nil\n");
	}
}
