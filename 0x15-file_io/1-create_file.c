#include "main.h"

/**
 * create_file - Creates a file
 * @filename: A pointer to the name of the file to create
 * @text_content: A pointer to a string to write to the file
 *
 * Return: returns 1 if successful and -1 if not.
 */
int create_file(const char *filename, char *text_content)
{
	int len, file_open, file_write;

	if (!filename)
		return (-1);

	if (text_content)
	{
		len = 0;
		while (text_content[len])
			len++;
	}
	file_open = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (!text_content)
	{
		close(file_open);
		return (1);
	}
	file_write = write(file_open, text_content, len);

	if (file_open < 0 || file_write < 0)
	{
		close(file_open);
		return (-1);
	}
	close(file_open);

	return (1);
}
