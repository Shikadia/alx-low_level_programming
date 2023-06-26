#include "main.h"

/**
* puts2 - prints every other character
* @str: string to print
* Return: returns void
*/
void puts2(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (str[index] % 2 == 0)
			_putchar(str[index]);
		str++;
	}
	_putchar('\n');
}
