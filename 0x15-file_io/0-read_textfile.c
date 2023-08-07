#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout
 * @filename: A pointer to the name of the file
 * @letters: The number of letters to read and print
 *
 * Return: returns actual number of letters that could be read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *temp;
	ssize_t file_open, file_read, file_write;

	if (!filename)
		return (0);

	temp = malloc(sizeof(*temp) * letters);
	if (!temp)
		return (0);

	file_open = open(filename, O_RDONLY);
	file_read = read(file_open, temp, letters);
	file_write = write(STDOUT_FILENO, temp, file_read);

	if (file_open < 0 || file_read < 0 ||
			file_write < 0 || file_write != file_read)
	{
		free(temp);
		return (0);
	}

	free(temp);
	close(file_open);

	return (file_write);
}
