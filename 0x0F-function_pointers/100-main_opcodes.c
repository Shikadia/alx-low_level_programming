#include <stdio.h>
#include <stdlib.h>

/**
  * main - Print the opcodes of its own main function.
  * @argc: The number of arguments passed to the function.
  * @argv: Pointer to pointers containing the arguments.
  * Return: returns 0 upon successful run.
  */
int main(int argc, char **argv)
{
	int num_of_bytes, code, i;
	int (*fptr)(int, char **);

	fptr = main;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_of_bytes = atoi(argv[1]);

	if (num_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	i = 0;

	while (i < num_of_bytes)
	{
		code = *(unsigned char *)(fptr + i);
		printf("%.2x", code);
		if (i < num_of_bytes - 1)
			printf(" ");
		i++;
	}

	printf("\n");
	return (0);
}
