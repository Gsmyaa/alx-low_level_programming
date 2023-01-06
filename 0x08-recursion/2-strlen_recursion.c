#include "main.h"
/**
 *_strlen_recursion - returns the length of a string
 *@s: input pointer
 *Return: int value
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (len);
	}
	else
	{
		return (len + _strlen_recursion(s + 1));
	}
}
