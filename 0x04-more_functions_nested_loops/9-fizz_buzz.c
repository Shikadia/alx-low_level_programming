#include <stdio.h>

/**
* main - print numbers  from 1 to 100
* if divisible by 5 and 3 print fizz -buzz
* but if by 3, print fizz and if 5 print buzz
* Return: void
*/
int main(void)
{
	int x;

	x = 1;
	while (x <= 100)
	{
		if ((x % 3 == 0) && (x % 5) == 0)
			printf("FizzBuzz");
		else if (x % 3 == 0)
			printf("Fizz");
		else if (x % 5 == 0)
			printf("Buzz");
		else
			printf("%d", x);

		if (x != 100)
			printf(" ");
		x++;
	}
	printf("\n");

	return (0);
}
