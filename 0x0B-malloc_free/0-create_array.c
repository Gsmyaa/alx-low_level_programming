#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates an array of char
 *@size: input size to allocate
 *@c: character to print
 *Return: char  pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
		return (NULL);
	ar = (char *)malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		*(ar + i) = c;
	}
	if (ar == NULL)
		return (NULL);
	else
		return (ar);
}
