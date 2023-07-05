#include "main.h"

int _is_prime(int num, int x);

/**
* is_prime_number - Returns a prime number if the input integer is a prime
* @n: Input integer to check
* Return: returns 1 or (True or False)
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_is_prime(n, 2));
}

/**
* _is_prime - Checks for prime numbers
* @num: Integer to check
* @x: integer to check against
* Return: returns (1) if it is prime and (0) if it is not
* i.e itr is divisible by another number
*/
int _is_prime(int num, int x)
{
	if (x * x > num)
		return (1);
	if (num % x == 0)
	{
		if (num != x)
			return (0);
		else
			return (1);
	}

	return (_is_prime(num, x + 1));
}
