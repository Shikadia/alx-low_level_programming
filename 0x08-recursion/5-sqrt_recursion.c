#include "main.h"

int _sqrt(int num, int root);

/**
* _sqrt_recursion - Returns the natural square root of a number
* @n: The postive integer number
* Return: Return (-1), (1) or (x * _pow_recursion(x, y-1))
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	if (n == 0)
		return (0);
	return (_sqrt(n,1));
}

/**
* _sqrt - Finds the square root of a num given the num and root
* @num: The number to compare to the root
* @root: The root to be checked
* Return: Returns (root), (-1) or (sqrt_finder(num, root + 1))
*/
int _sqrt(int num, int root)
{
	if ( root * root == num)
		return (root);
	else if (root * root > num)
		return (-1);
	else
		return (_sqrt(num, root + 1));
}
