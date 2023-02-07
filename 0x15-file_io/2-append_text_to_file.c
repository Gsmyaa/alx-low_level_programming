#include "main.h"
/**
 *append_text_to_file - appends text at the end
 *@filename: input address of a file
 *@text_content: input addross of string
 *Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, i, len;

	if (filename == NULL)
		return (-1);
	file_d = open(filename, O_WRONLY | O_APPEND);
	if (file_d < 0)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (len = 0; text_content[len]; len++)
		;
	i = write(file_d, text_content, len);
	if (i < 0)
	{
		close(file_d);
		return (-1);
	}
	close(file_d);
	return (1);
}
