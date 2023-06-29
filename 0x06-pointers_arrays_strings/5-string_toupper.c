#include "main.h"
#include <ctype.h>

/**
* *string_toupper - Changes all lowercase letters of a string to uppercase
* @str: Pointer to the chracter of strings to convert
* Return: return (str)
*/
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (islower(str[i]))
			str[i] = toupper(str[i]);

		i++;
	}
	return (str);
}
