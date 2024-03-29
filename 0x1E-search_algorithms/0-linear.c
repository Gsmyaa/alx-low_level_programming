#include "search_algos.h"

/**
 * linear_search - searches value in an array of integers
 * @array: pointer to the first element of array.
 * @size: no of elements in array.
 * @value: value to search for.
 * Return: first index where value is located,
 * or -1 if value is not present or NULL.
 **/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
