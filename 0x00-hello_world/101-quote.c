#include <stdio.h>
/**
 *main - print out string
 *Return: 1 value
 */
int main(void)
{
	int i;
	char c;
	char string[] = { "and that piece of art is \
		useful\" - Dora Korpar, 2015-10-19"};
	for (i = 0; i < 58; i++)
	{
		c = string[i];
		putchar(c);
	}
	putchar('\n');
}
