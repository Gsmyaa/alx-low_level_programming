#include <stdio.h>
/**
 *main - print out lowercase alphabet
 *Return: 0 value
 */
int main(void)
{
	char l;

	l = 'a';
	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
