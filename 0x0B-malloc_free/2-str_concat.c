#include <stdlib.h>

/**
* str_concat - Concatenates two strings (s1 & s2)
* @s1: Pointer to destination string
* @s2: Pointer to the source string
*
* Return: returns (NULL) on FAILURE
*/
char *str_concat(char *s1, char *s2)
{
	int s1_len, s2_len, i;
	char *return_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = 0;
	s2_len = 0;

	while (s1[s1_len])
		s1_len++;
	while (s2[s2_len])
		s2_len++;

	return_str = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));

	if (return_str == NULL)
		return NULL;

	i = 0;
	while (i < s1_len)
	{
		return_str[i] = s1[i];
		i++;
	}

	i = 0;
	while (i < s2_len)
	{
		return_str[i + s1_len] = s2[i];
		i++;
	}

	return_str[s1_len + s2_len] = '\0';

	return return_str;
}
