#include <stdlib.h>
#include <stdio.h>

/**
* main - Multiplies two positive numbers and prints to terminal.
* @argc: The number of arguments passed.
* @argv: A pointer to an array of pointers that point to the arguments.
*
* Return: 0 upon successful run.
*/
int main(int argc, char **argv)
{
	
	int num1, num2;


	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 == 0)
	{
		printf("Error\n");
		return (98);
	}
	if (num2 == 0)
	{
		printf("Error\n");
		return (98);
	}
	
	printf("%d\n", num1 * num2);
	return (0);

}
