#include "main.h"
#include <stdlib.h>
/**
 *main - multiply two numbers
 *@argc: input argument
 *@argv: input
 *Return: integer
 */
int main(int argc, char *argv[])
{
	int i, res = 0, j;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] > '9' || *argv[i] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
			else
			{
				j = atoi(argv[i]);
				res += j;
			}
		}
		printf("%d\n", res);
	}
	return (0);
}

