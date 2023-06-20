#include "main.h"

/**
* main - entry point to programme that
* prints _putchar
* Return: returns (0) on completion
*/
int main(void)
{
	int count;
	int i;
	char input[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	i = 0;
	count = 0;
	while (count < 8)
	{
		_putchar(input[i]);
		i++;
		count++;
	}
	_putchar('\n');
	return (0);
}
