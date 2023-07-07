#include <stdio.h>

/**
* main - Prints the number of arguments passed into it
* @argc: The integer variable that counts the number of arguments
* @argv: The pointer to an array of strings
* Return: return (0)
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
