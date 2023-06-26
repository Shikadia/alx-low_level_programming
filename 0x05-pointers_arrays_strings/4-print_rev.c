#include "main.h"
#include <string.h>

/**
* print_rev - prints a string in reverse
* @s: the string to be reveresed
* Return: returns void
*/
void print_rev(char *s)
{
	int str_len = strlen(s);
	int index = str_len - 1;

	while (index >= 0)
	{
		_putchar(s[index]);
		index--;
	}
	_putchar('\n');
}
