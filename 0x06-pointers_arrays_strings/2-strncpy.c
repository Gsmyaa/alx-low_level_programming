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
	int i;
	int len = 0;

	for (i = 0; src[i]; i++)
	{
		len = len + 1;

	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = len; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);

}
