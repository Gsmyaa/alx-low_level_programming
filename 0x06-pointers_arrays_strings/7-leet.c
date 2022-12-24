#include "main.h"
/**
 *leet - it encodes a string into 1337
 *@c: input of pointer of array
 *Return: char pointer to array
 */
char *leet(char *c)
{
	int i, j;
	char lett[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char exc[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == lett[j])
			{
				c[i] = exc[j];
			}
		}
	}
	return (c);
}
