#include "main.h"
/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: input pointer
 *@old_size: input int
 *@new_size: input int
 *Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ar, *cpy;
	unsigned int i;

	cpy = ptr;
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ar = malloc(new_size);
		return (ar);
	}
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (0);
	}
	ar = malloc(new_size);
	if (ar == NULL)
		return (0);
	for (i = 0; i < old_size; i++)
	{
		ar[i] = cpy[i];
	}
	free(ptr);
	return (ar);
}
