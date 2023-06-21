#include <stdio.h>

/**
 * main - Finds and prints the sum of the even-valued terms
 *
 *Return: 0
 */
int main(void)
{
	long num = 0;
	long x = 1;
	long y = 2;
	long sum = 0;

	while (num < 4000000)
	{
		if (num % 2 != 0)
			continue;
		sum = x + y;
		printf("%ld", sum);

		x = y;
		y = sum;

		if (num == 3800000)
			printf("\n");
		else
			printf(", ");
		num++;
	}
	return (0);
}
