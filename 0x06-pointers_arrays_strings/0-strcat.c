#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: input array
 *@src: input array
 *Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;
	char *med = dest;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (med);
}
