#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints the minimum number of coins to make change for an amount of
*	  money
* @argc: The integer variable that counts the number of arguments
* @argv: The pointer to an array of strings
*
* Return: returns (1) or (0)
*/
int main(int argc, char *argv[])
{
	int i, cents, change;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = 0;
	cents = atoi(argv[1]);

	if (cents > 0)
	{
		i = 0;
		while (i < 5)
		{
			while (cents >= coins[i])
			{
				change++;
				cents -= coins[i];
			}
			i++;
		}
	}
	printf("%d\n", change);
	return (0);
}
