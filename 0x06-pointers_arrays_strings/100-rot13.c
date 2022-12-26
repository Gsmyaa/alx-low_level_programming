#include "main.h"
/**
 *rot13 - encodes a string using rot13
 *@c: input char from main funtion
 *Return: char pointer
 */
char *rot13(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		while ((c[i] >= 'a' && c[i] <= 'z') || (c[i] >= 'A' && c[i] <= 'Z'))
		{
			if ((c[i] >= 'A' && c[i] <= 'M') || (c[i] >= 'a' && c[i] <= 'm'))
			{
				c[i] += 13;
			}
			else
			{
				c[i] -= 13;
			}
			i++;
		}
	}
	return (c);
}
