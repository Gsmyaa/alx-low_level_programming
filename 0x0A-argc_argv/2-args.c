#include "main.h"
/**
 *main - prints all arguments it receives
 *@argc: input argument
 *@argv: input argument
 *Return: int value
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
