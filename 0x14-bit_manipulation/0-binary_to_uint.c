#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 *binary_to_uint - converts a binary to unsigned int
 *@b: input pointer
 *Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int bin, i;

	bin = atoi(b);
	for (i = 0; bin; i++, bin /= 10)
	{
		if (bin % 10)
		{
			dec += pow(2, i);
		}
	}
	return (dec);
}
