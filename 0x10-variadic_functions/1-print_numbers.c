#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers, followed by a new line
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 * Return: returns Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);

	while (i < n)
	{
		printf("%d", va_arg(nums, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
		i++;
	}
	va_end(nums);
	printf("\n");
}
