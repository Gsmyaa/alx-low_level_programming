#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest: input array
 *@src: input array
 *@n: input bytes
 *Return: char array
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, len = 0, k;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		len = len + 1;
		j++;
	}
	if (n > len)
	{
		n = len;
	}
	for (k = 0; src[k] != '\0'; k++)
	{
		dest[i++] = src[k];
	}
	dest[i++] = '\0';
	return (dest);
}
