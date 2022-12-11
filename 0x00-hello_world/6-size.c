#include <stdio.h>

/**
 *main - entry point
 *return - 0
 */
int main(void)
{
	char c;
	int i;
	long int a;
	long long int b;
	float f;
	printf("Size of a char: %c byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(a));
	printf("Size of a long long int: %lld byte(s)\n", sizeof(b));
	printf("Size of a float: %f byte(s)\n", sizeof(f));
	return (0);
	
