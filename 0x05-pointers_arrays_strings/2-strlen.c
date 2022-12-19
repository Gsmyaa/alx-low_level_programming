#include "main.h"
/**
 *_strlen - returns the length of astring
 *@s: input
 *Return: int value
 */
int _strlen(char *s)
{
	char a[] = s;
	int length = 0;
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		length += length;
	}
	return (length);

}
