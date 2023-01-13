#include "main.h"
/**
 *malloc_checked - allocates memory
 *@b: input
 *@Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ar;

	ar = malloc(sizeof(unsigned int) * b);
	if (ar == NULL)
	{
		exit (98);
	}
	return (ar);
}
