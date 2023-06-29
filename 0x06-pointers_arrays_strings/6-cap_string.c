#include <ctype.h>
#include "main.h"

/**
* *cap_string - Capitalizes all words of a string
* @str: Pointer to the string to capitalize
* Return: return str
*/
char *cap_string(char *str)
{
	int i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = toupper(str[0]);

	i = 1;
	while (str[i] != '\0')
	{
		if ((str[i - 1] == ' ' || str[i - 1] == '\t' ||
			str[i - 1] == '\n' || str[i - 1] == ',' ||
			str[i - 1] == ';' || str[i - 1] == '.' ||
			str[i - 1] == '!' || str[i - 1] == '?' ||
			str[i - 1] == '"' || str[i - 1] == '(' ||
			str[i - 1] == ')' || str[i - 1] == '{' ||
			str[i - 1] == '}') && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = toupper(str[i]);
		}
		i++;
	}
	return (str);
}
