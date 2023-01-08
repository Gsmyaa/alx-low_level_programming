#include <unistd.h>
/**
 *_putchar - writes the charcter c to stdout
 *@c: character to be printed
 *Return: 1 if succes or -1 if error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
