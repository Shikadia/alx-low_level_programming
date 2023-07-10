#include <stdlib.h>

/**
* _strdup - Returns a pointer to a newly allocated space in memory
* which contains a copy of the string given as a parameter
* @str: Pointer to a string of characters
*
* Return: returns (NULL) if NULL and value if not
*/
char *_strdup(char *str)
{
	int i, str_len;
	char *return_str;

	if (str == NULL)
		return (NULL);

	str_len = 0;
	while (str[str_len] != '\0')
		str_len++;

	return_str = (char *)malloc((str_len + 1) * sizeof(char));

	if (!return_str)
		return (NULL);

	i = 0;
	while (i < str_len)
	{
		return_str[i] = str[i];
		i++;
	}
	return_str[i] = '\0';
	return (return_str);
}
