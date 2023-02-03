#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index.
 * @n: input int num.
 * @index: index starting from 0.
 * Return: 1 if it worked, otherwise -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = 1 << index;

	if (index > (sizeof((*n)) * 8))
		return (-1);

	*n = *n | a;
	return (1);
}
