#include <stdio.h>

/**
* main - entry point of programme, print all numbers
* seperated by , and space
* Return: returns 0
*/
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		if (num == 9)
			break;
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');
	return (0);
}
