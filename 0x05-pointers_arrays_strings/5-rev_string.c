#include "main.h"
#include <string.h>

/**
* rev_string - revereses an input string
* @s: pointer to the string
* Return: returns void
*/
void rev_string(char *s)
{
	int str_len;
	int  i;
	int j;
	char buffer;

	str_len = strlen(s);
	i = 0;
	j = str_len - 1;

	while (i < j)
	{
		buffer = s[i];
		s[i] = s[j];
		s[j] = buffer;
		i++;
		j--;
	}
}
