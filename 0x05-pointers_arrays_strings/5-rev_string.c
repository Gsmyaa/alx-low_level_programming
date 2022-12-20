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
	int r;
	int tmp;

	for (i = 0; s[i] != '\0'; i++)
	{
		l += 1;
	}
	r = l - 1;
	for (j = 0; j < r; j++)
	{
		tmp = s[j];
		s[j] = s[r];
		s[r] = tmp;
		r--;
	}
}
