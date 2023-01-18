#include "function_pointers.h"
/**
 *array_iterator - executes a funtion given as parameter
 *@array: input array
 *@size: input array size
 *@action: input pointer to funtion
 *Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
