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
		ar = va_arg(lists, char *);
		if (ar)
		{
			if (i < n - 1)
			{
				printf("%s%s", ar, separator);
			}
			else
			{
				printf("%s", ar);
			}
		}
		else
		{
			if (i < n - 1)
				printf("nil%s", separator);
			else
				printf("nil");
		}

	}
	printf("\n");
	va_end(lists);

}
