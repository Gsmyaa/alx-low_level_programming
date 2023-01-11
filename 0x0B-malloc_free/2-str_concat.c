#include "main.h"
#include <stdlib.h>
/**
 *str_concat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *Return: pointer char
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1 = 0, len2 = 0;
	char *ar;

	for (i = 0; s1[i] != '\0'; i++)
	{
		len1 = len1 + 1;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		len2 = len2 + 1;
	}
	len2++;
	ar = malloc((len1 + len2) * sizeof(char));
	for (i = 0; i < len1; i++)
	{
		ar[i] = s1[i];
	}
	for (j = 0; j <= len2; j++)
	{
		ar[i] = s2[j];
		i++;
	}
	return (ar);
}
