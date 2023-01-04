#include "main.h"
/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: input pointer
 *@accept: input pointer
 *Return: char pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	int pos = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				pos = i;
				return (s + pos);
			}
		}
	}
	return ('\0');
}
