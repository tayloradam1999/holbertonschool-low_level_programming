#include <stdio.h>

/**
 * main - prints out all possible combos of single
 * digit numbers
 *
 * Return: 0 baby! surprise!
 */

int main(void)
{
	int n = 48;

	while (n <=57)
	{
		putchar (n);
		if (n != 57)
		{
			putchar (',');
			putchar(' ');
		}
	n++;
}
putchar('\n');
return (0);
}
