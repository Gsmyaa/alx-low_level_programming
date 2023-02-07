#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 *read_textfile - reads text fileand prints it to posix stdout
 *@filename: input address of file
 *@letters: number of letters to be printed
 *Return: actual numbers letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t cnt = 0;
	char *buf;

	file_d = open(filename, O_RDONLY);
	if (file_d < 0)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		close(file_d);
		return (0);
	}
	cnt = read(file_d, buf, letters);
	if (cnt < 0)
	{
		free(buf);
		close(file_d);
		return (0);
	}
	cnt = write(STDOUT_FILENO, buf, cnt);
	free(buf);
	close(file_d);
	if (cnt < 0)
		return (0);
	return (cnt);
}
