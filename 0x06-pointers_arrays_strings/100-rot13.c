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
		while ( (c[i] >= 97 && c[i] <= 122) || (c[i] >= 65 && c[i] <= 90))
		{
			if ((c[i] >= 65 && c[i] <= 77) || (c[i] >= 97 && c[i] <= 109))
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
