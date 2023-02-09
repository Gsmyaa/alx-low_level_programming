#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *main - copies the content of a file to another file
 *@argc: number of arguments
 *@argv: input arguments
 *Return: int
 */
int main(int argc, char *argv[])
{
	int file_d_1, file_d_2;
	int cnt1, i, j, len1 = 1024;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_d_1 = open(argv[1], O_RDWR);
	if (file_d_1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	buf = malloc(len1);
	cnt1 = read(file_d_1, buf, len1);
	if (cnt1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buf);
		close(file_d_1);
		exit(98);
	}
	file_d_2 = open(argv[2], O_RDWR | O_CREAT | O_TRUNC,\
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_d_2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buf);
		close(file_d_2);
		close(file_d_1);
		exit(99);
	}
	i = write(file_d_2, buf, len1);
	if (i < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buf);
		close(file_d_2);
		close(file_d_1);
		exit(99);
	}
	close(file_d_1);
	j = close(file_d_2);
	if (j < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_d_2);
		exit(100);
	}
	return (0);
}
