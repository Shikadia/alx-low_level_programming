#include <stdio.h>

/**
* main - entry point of programme, print all numbers
* combination in twos
* Return: returns 0
*/
int main(void)
{
	int firstNum;
	int secondNum;

	firstNum = 0;
	while (firstNum  < 9)
	{
		if ((firstNum == 8) && (secondNum == 9))
			break;
		secondNum = firstNum + 1;
		while (secondNum < 10)
		{
			putchar(firstNum + '0');
			putchar(secondNum + '0');
			if ((firstNum == 8) && (secondNum == 9))
				break;
			putchar(',');
			putchar(' ');
			secondNum++;
		}
		firstNum++;
	}
	putchar('\n');
	return (0);
}
