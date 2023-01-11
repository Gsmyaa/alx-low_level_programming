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
	/*malloc part*/
	ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);
	/*Initialization part*/
	for (i = 0; i < size; i++)
	{
		*(ar + i) = c;
	}
	return (ar);
}
