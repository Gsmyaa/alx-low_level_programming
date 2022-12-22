#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: input array
 *@src: input array
 *Return: char
 */
char *_strcat(char *dest, char *src)
{
	char *med;
	med = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (med);
}
