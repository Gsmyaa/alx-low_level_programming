#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
/**
 *print_all - prints anything
 *@format: input format
 *Return: nothing
 */
void print_all(const char * const format, ...)
{
	char *str;
	char frmt[] = {'c', 'i', 'f', 's'};
	va_list lists;
	int i = 0, j;
	int len1 = strlen(format);

	va_start(lists, format);
	while (i < len1)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(lists, int));
				break;
			case 'i':
				printf("%d", va_arg(lists, int));
				break;
			case 'f':
				printf("%f", va_arg(lists, double));
				break;
			case 's':
				str = va_arg(lists, char *);
				if (str == NULL)
					printf("nil");
				printf("%s", str);
				break;
			default:
				break;
		}
		j = 0;
		while (j < 4)
		{
			if ((format[i] == frmt[j]) && (i < len1 - 1))
				printf(", ");
			j++;
		}
		i++;
	}
	printf("\n");
}
