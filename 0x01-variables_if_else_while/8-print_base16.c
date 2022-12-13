#include <stdio.h>
/**
 *main - hexadecimal printing
 *Return: 0 value
 */
int main(void)
{
	char a = 'a';
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
