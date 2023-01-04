#include "main.h"
/**
 *_strspn - gets the length of a prefix substring
 *@s: input pointer char
 *@accept: input pointer char
 *Return: int value
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			return (n);
		}
	}
	return (n);
}
