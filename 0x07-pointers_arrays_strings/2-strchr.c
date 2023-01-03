#include "main.h"
/**
 *_strchr - locates a character in a string
 *@s: input pointer
 *@c: input char
 *Return: char pointer
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s)
	{
		if (*s == c)
		{
			return (s + i);
		}
		i++
		s++;
	}
	return (NULL);
}
