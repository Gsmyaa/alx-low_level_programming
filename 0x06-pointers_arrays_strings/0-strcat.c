#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: input array
 *@src: input array
 *Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i, n;
	int len1 = 0;
	int len2 = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len1 = len1 + 1;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		len2 = len2 + 1;
	}
	n = len1 + len2;
	for (i = 0; i < len2; i++)
	{
		dest[len1] = src[i];
		len1++;
	}
	dest[n + 1] = '\0';
	return (dest);
}
