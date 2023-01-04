#include "main.h"
/**
 *cmp - compate it
 *@str: input pointer
 *@sub: input pointer
 *Return: int value
 */
int cmp(char *str, char *sub)
{
	while (*str && *sub)
	{
		if (*str != *sub)
		{
			return (0);
		}
		str++;
		sub++;
	}
	return (*str == '\0');
}
/**
 *_strstr - locates a substring
 *@haystack: input pointer
 *@needle: input pointer
 *Return: char pointer
 */
char *_strstr(char *haystack, char *needle)
{
	char *str = haystack;
	char *sub = needle;

	while (*str != '\0')
	{
		if ((*str == *sub) && cmp(str, sub))
		{
			return (str);
		}
		str++;
	}
	return ('\0');
}
