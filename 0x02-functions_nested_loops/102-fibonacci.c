#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 *Return: returns 0
 */
int main(void)
{
	int x;

	long num1 = 0;
	long num2 = 1;
	long sum = 0;
	while ( x < 50)
	{
		sum = num1 + num2;
		printf("%ld", sum);

		num1 = num2;
		num2 = sum;
		if ( x == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}

