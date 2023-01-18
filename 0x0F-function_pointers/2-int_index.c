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
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			j = cmp(array[i]);
			if (j != 0)
				return (i);
		}
	}
	return (-1)
}
