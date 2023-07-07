#include <stdio.h>
#include <stdlib.h>

int _atoi(char *s);

/**
* main - Adds positive numbers
* @argc: The integer variable that counts the number of arguments
* @argv: The pointer to an array of strings
* Return: return (1) or (0)
*/
int main(int argc, char *argv[])
{
	int i;
	int sum;
	int num;


	i = 1;
	while (i < argc)
	{
		num = _atoi(argv[i]);

		if (num == -1)
		{
			printf("Error\n");
			return (1);
		}

		sum += num;
		i++;
	}
	printf("%d\n", sum);
	return (0);

}

/**
* _atoi - Converts a number inside a string and stores it into an int.
* @s: Pointer to the string containing the number.
* Return: The number stored in an int.
*/

int _atoi(char *s)
{
	int num;
	char *buffer;

	buffer = s;
	num = 0;

	while (*buffer)
	{
		if (*buffer >= '0' && *buffer <= '9')
			num = num * 10 + (*buffer - '0');
		else
			return (-1);

		buffer++;
	}

	return (num);
}
