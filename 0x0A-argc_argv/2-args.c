#include <stdio.h>

/**
* main - Prints all arguments it receives
* @argc: The integer variable that counts the number of arguments
* @argv: The pointer to an array of strings
* Return: return (0)
*/
int main(int argc, char *argv[])
{
	int i;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
