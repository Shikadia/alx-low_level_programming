#include "main.h"

/**
* _puts - method to print an input string
* @str: input string to be printed
* Return: returns void
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
