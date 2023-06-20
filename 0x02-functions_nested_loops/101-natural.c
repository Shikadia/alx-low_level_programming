#include <stdio.h>

/**
 * main - Computes and prints the sum of all the multiples of 3 or 5 below 1024
 *	  (excluded)
 *
 *Return: returns 0
 */
int main(void)
{
	int num = 0;
	int sum = 0;

	while (num < 1024)
	{
		if((num% 3) == 0 || (num % 5) == 0)
			sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
