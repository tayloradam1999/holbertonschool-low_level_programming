#include <stdio.>

/**
 * main - prints out all possible combos of single
 * digit numbers
 *
 * Return: 0 baby! surprise!
 */

int main(void)
{
	int digit;

	for (digit = '0'; number <= '9'; number++)
	{
		putchar(digit + '0');

		if (number < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
putchar('\n');
return (0);
}
