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

	va_start(lists, n);
	for (i = 0; i < n; i++)
	{
		ar = va_arg(lists, char *);
		if (ar)
			printf("%s", ar);
		else
			printf("nil");
		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(lists);
}
