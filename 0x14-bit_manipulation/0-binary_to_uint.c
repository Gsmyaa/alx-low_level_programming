#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *binary_to_uint - converts a binary to unsigned int
 *@b: input pointer
 *Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int bin, rem, base = 1, i = 0;

	if (!b)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	bin = atoi(b);
	while (bin)
	{
		rem = bin % 10;
		dec = dec + rem * base;
		bin /= 10;
		base = base * 2;
	}
	return (dec);
}
