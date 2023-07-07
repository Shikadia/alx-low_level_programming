#include <stdio.h>
#include <stdlib.h>

/**
* main - Multiplies two numbers
* @argc: The integer variable that counts the number of arguments
* @argv: The pointer to an array of strings
* Return: return (1) or (0)
*/
int main(int argc, char *argv[])
{
	int x, y;

	if (argc >= 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);

		printf("%d\n", x * y);
		return (0);
	}
	printf("Error\n");
	return (1);
}

