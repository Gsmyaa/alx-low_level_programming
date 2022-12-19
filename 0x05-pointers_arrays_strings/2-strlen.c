#include "main.h"
/**
 *_strlen - returns the length of astring
 *@s: input
 *Return: int value
 */
int _strlen(char *s)
{
	int length = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		length += 1;
	}
	return (length);

}
