#include "function_pointers.h"
/**
 *int_index - searches for an integer
 *@array: input array
 *@size: input size of
 *@cmp: pointer to function
 *Return: int value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j, len = 0;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		j = cmp(array[i]);
		if (j != 0)
			len++;
	}
	if (len == 0)
		return (-1);
	return (len);
}
