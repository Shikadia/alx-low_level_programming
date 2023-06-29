#include <string.h>

/**
 * *leet -  Encodes a string into 1337
 * @str: Pointer to the string to encode
 *
 * Return: result
 */
char *leet(char *str)
{
	int i;
	int j;

	char letter_compare[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char num_replace[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (str[i] == letter_compare[j])
				str[i] = num_replace[j];
			j++;
		}
		i++;
	}
	return (str);
}
