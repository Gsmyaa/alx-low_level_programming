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

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);

}
