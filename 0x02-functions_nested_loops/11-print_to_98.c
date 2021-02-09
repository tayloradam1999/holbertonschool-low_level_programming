#include "holberton.h"

/**
 * print_to_98 - Prints all numbers from n to 98
 * @n: Random number
 * Return: void
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d", n);
		if (n > 98)
		{
			n--;
		}
		else if (n < 98)
		{
			n++;
		}
	}
	printf("%d\n", 98);
}
