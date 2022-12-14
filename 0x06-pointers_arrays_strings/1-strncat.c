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
	int i = 0;
	int len = 0;

	while (dest[i++])
	{
		len++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[len++] = src[i];
	}
	return (dest);
}
