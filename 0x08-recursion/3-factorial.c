#include "main.h"

/**
* factorial - Returns the factorial of a given number
* @n: An integer to input to obtain the factorial
* Return: Return (-1), (1) or (n * factorial(n - 1))
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
