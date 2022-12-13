#include <stdio.h>
/**
 *main - printing lower case in reverse
 *Return: 0 value
 */
int main(void)
{
	char l;

	l = 'z';
	while (l >= 'a')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
