#include <stdio.h>
/**
 *main - print combination
 *Return: 0 value
 */
int main(void)
{
	int i = 0, j = 0;

	while (i < 9)
	{
		while (j < 9)
		{
			putchar((i + '0'), ' ');
			putchar((j + '0'), ' ');
		}
	}
	putchar('\n');
	return (0);
}
