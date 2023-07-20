#include <stdarg.h>

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: The number of parameters passed to the function
 * Return: returns sum of all the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;

	va_list nums;

	sum = 0;
	if (n != 0)
	{
		va_start(nums, n);
		i = 0;
		while (i < n)
		{
			sum += va_arg(nums, int);
			i++;
		}
		va_end(nums);
	}
	return (sum);
}
