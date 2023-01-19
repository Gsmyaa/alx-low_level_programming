#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - sum of all parameters
 *@n: input paramater
 *Return: int value
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;
	va_list lists;

	va_start(lists, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		result = result + va_arg(lists, int);
	}
	return (result);
}
