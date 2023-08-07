#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: A pointer to the name of the file
 * @text_content: The string to add to the end of the file
 *
 * Return: returns 1 on success)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len, o, w;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len])
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	if (!text_content)
	{
		close(o);
		return (1);
	}
	w = write(o, text_content, len);

	if (o < 0|| w < 0)
		return (-1);

	close(o);

	return (1);
}
