#include <stdio.h>

/**
* main - Finds and prints the largest prime factor of the number 612852475143
*
* Return: 0
*/
int main(void)
{
	long int num, x, largest_prime;

	num = 612852475143;
	x = 1;
	while (x <= num)
	{
		if (num % x == 0)
		{
			largest_prime = x;
			num /= x;
		}
		x++;
	}
	printf("%ld\n", largest_prime);

	return (0);
}
