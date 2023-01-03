#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: input array
 *@src: input pointer
 *@n: input int
 *Return: char pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i< n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
