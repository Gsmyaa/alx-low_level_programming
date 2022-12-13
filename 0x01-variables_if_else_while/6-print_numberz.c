#include <stdio.h>
/**
 *main - print digit
 *Return: 0 value
 */
int main(void)
{
	int d;

	while (d < 10)
	{
		putchar(d + '0');
		d++;
	}
	putchar('\n');
	return (0);
}
