#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line
 * @separator: The string to be printed between strings
 * @n: The number of strings passed to the function
 * Return: returns Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *buffer;
	va_list strs;

	va_start(strs, n);

	i = 0;
	while (i < n)
	{
		buffer = va_arg(strs, char *);
		if (strs == NULL)
			printf("(nil)");
		else
			printf("%s", buffer);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
		i++;
	}
	va_end(strs);
	printf("\n");
}
