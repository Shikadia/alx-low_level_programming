#include <stdlib.h>

/**
* argstostr - Concatenates all the arguments of your program
* @ac: Argument count
* @av: Pointer to an array of argument vectors/strings
*
* Return: returns (NULL) on failure
*/
char *argstostr(int ac, char **av)
{
	int i, j, x;
	unsigned int len;
	char *str;

	if (ac <= 0 || av == NULL)
		return (NULL);

	i = 0;
	len = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			len++;
			j++;
		}
		i++;
	}

	str = (char *)malloc(len * sizeof(char));

	if (str == NULL)
		return (NULL);
	i = 0;
	x = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			str[x] = av[i][j];
			x++;
			j++;
		}
		i++;
		str[x] = '\n';
		x++;
	}
	str[x] = '\0';

	return (str);
}
