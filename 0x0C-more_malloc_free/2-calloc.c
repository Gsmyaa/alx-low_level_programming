#include "main.h"
/**
 *_calloc - allocates memory for array
 *@nmemb: input
 *@size: input
 *Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ar;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ar = calloc(nmemb, size);
	if (ar == NULL)
		return (NULL);
	return (ar);
}
