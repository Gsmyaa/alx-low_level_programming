#include "main.h"
/**
  * clear_bit - make a bit at index to zero
  * @n: input pointer
  * @index: input number
  * Return: 1 on success, -1 on failure
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);
	return ((index > 8 * sizeof(*n)) ? -1 : 1);
}
