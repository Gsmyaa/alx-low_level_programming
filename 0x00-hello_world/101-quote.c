#include <stdio.h>
#include <unistd.h>
/**
 *main - print out string
 *Return: 1 value
 */
int main(void)
{
	int c;

	c = write(1, "and that piece of art is \
			useful\" - Dora Korpar, 2015-10-19", 58);
	putchar('\n');
	return (0);
}
