#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: returns 1 on success.
*/
int _putchar(char c)
{
	int value = write(1, &c, 1);

	return (value);
}
