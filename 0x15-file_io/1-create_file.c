#include "main.h"
#include <stdlib.h>
/**
 *create_file - creates file
 *@filename: input address of file
 *@text_content: input address of file content
 *Return: 1 on succes, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_d, i;

	if (filename == NULL)
		return (-1);
	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_d < 0)
	{
		close(file_d);
		return (-1);
	}
	i = write(file_d, text_content, sizeof(text_content));
	if (i < 0)
	{
		close(file_d);
		return (-1);
	}
	close(file_d);
	return (1);
}
