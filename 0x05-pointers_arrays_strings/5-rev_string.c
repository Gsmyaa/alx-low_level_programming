#include "main.h"
/**
 *rev_string - reverse a string
 *@s: input
 *Return: void
 */
void rev_string(char *s)
{
	int l = 0;
	int i, j;
	int k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		l += 1;
	}
	for (j = l - 1; j >= 0; j--)
	{
		s[k] = s[j];
		k++;
	}
}
