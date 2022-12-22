#include "main.h"
/**
 *_strncpy - copies string
 *@dest: input array
 *@src: input array
 *@n: input digit
 *Return: char value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j = 0, len = 0;

	while (src[j] != '\0')
	{
		len++;
	}
	if (n > len)
	{
		n = len;
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);

}
