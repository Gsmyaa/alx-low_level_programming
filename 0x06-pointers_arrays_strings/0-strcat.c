#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: input array
 *@src: input array
 *Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k;
	int len1 = 0;
	int len2 = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		len1 = len1 + 1;
	}
	for (j = 0; dest[j] != '\0'; j++)
	{
		len2 = len2 + 1;
	}
	for (k = 0; k <= len2; k++)
	{
		dest[k + len1] = src[k];
	}
	return (dest);
}
