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
	char *rt;

	if (str == NULL)
		return (NULL);

	str_len = 0;
	while (str[str_len] != '\0')
		str_len++;

	rt = (char *)malloc((str_len + 1) * sizeof(char));

	if (!rt)
		return (NULL);

	i = 0;
	while (i < str_len)
	{
		rt[i] = str[i];
		i++;
	}
	rt[i] = '\0';
	return (rt);
}
