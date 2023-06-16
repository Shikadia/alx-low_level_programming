#include <stdio.h>

/**
* main - entry point of programme, print all numbers
* combination in threes
* Return: returns 0
*/
int main(void)
{
	int firstNum;
	int secondNum;
	int thirdNum;

	firstNum = 0;
	while (firstNum  < 8)
	{
		if ((firstNum == 7) && (secondNum == 8) && thirdNum == 9)
			break;
		secondNum = firstNum + 1;
		while (secondNum < 9)
		{
			thirdNum = secondNum + 1;
			while (thirdNum < 10)
			{
				putchar(firstNum + '0');
				putchar(secondNum + '0');
				putchar(thirdNum + '0');
				if ((firstNum == 7) && (secondNum == 8) && thirdNum == 9)
					break;
				putchar(',');
				putchar(' ');
				thirdNum++;
			}
			secondNum++;
		}
		firstNum++;
	}
	putchar('\n');
	return (0);
}
