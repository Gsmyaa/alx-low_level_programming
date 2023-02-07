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
	int file_d, i, len;

	if (filename == NULL)
		return (-1);
	for (len = 0; text_content[len]; len++)
		;
	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC | O_EXCL, S_IRUSR | S_IWUSR);
	if (file_d < 0)
	{
		close(file_d);
		return (-1);
	}
	if (text_content == NULL)
	{
		close(file_d);
		return (1);
	}
	i = write(file_d, text_content, len);
	if (i < 0)
	{
		close(file_d);
		return (-1);
	}
	close(file_d);
	return (1);
}
