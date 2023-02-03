#include "main.h"
#include <stdio.h>
/**
  * get_endianness - cheks the eniannesess
  * Return: 0 if big endian, 1 if little endian
  */
int get_endianness(void)
{
	int i;
	char *test;

	i = 1;
	test = (char *)&i;
	return ((int)test[0]);
}

