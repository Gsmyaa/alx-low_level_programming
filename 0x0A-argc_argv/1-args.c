#include "main.h"
/**
 *main - prints the number of arguments
 *@argc: input argument number
 *@argv: input argument array
 *Return: int value
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i = argc - 1;
	printf("%d\n", i);
	return (0);
}
