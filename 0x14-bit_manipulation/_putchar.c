#include <unistd.h>

/**
 * _putchar - Writes the character c to stdout
 * @c: The character to print
 *
 * Return: returns 0 or 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
