#include "main.h"
/**
 *_strcmp - compares two strings
 *@s1: input array
 *@s2: input array
 *Return: int value
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int n;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	n = s1[i] - s2[i];
	return (n);
}
