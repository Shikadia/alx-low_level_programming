#include <stdio.h>

/**
* main - Prints its name, followed by a new line
* @argc: The integer variable that counts the number of arguments
* @argv: The pointer to an array of strings
* Return: return (0)
*/
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", *argv);

	return (0);

}
