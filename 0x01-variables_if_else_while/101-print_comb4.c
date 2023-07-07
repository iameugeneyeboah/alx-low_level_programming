#include <stdio.h>
 /**
  * main - entry point
  * Description: Print all possible different combinations of 3 digits.
  * Numbers must be separated by commas and a space.
  * The 3 digits must be different.
  * 012, 120, 102, 021, 201, 210 are considered the same combination.
  * print only the smallest combination of 3 digits.
  * Numbers should be printed in ascending order.
  * You can only use `putchar` to print to console.
  * You can only use `putchar` up to 6 times.
  * You are not allowed to use any variables of type `char
  * Return: Always 0
  */
int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 < 8; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 9; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 < 10; digit3++)
			{
				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');
				putchar((digit3 % 10) + '0');

				if (digit1 == 7 && digit2 == 8 && digit3 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
