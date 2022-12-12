#include <stdio.h>
/**
 *main - this fuction exclude e and q from alpha list
 *Return: 0 value
 */
int main(void)
{
	char l;

	l = 'a';
	while (l <= 'z')
	{
		if (l != 'e' || l != 'q')
		{
			putchar(l);
		}
		l++;
	}
	putchar('\n');
	return (0);
}
