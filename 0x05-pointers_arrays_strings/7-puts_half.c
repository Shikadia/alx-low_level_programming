#include "main.h"
#include <string.h>

/**
* puts_half - prints half of a string
* @str: the string to be devided and printed
* Return: returns void
*/
void puts_half(char *str)
{
	int str_len;
	int index;

	str_len = strlen(str);

	if (str_len % 2 == 0)
		index = (str_len / 2);
	else
		index = str_len - ((str_len - 1) / 2);

	while (index < str_len)
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
