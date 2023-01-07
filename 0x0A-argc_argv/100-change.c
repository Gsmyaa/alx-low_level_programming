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
	int n, i;
	int res = 0, cns[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s", "Error");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && n >= 0; i++)
	{
		for (; n >= cns[i]; n -= cns[i])
		{
			res++;
		}
	}
	printf("%d\n", res);
	return (0);
}
