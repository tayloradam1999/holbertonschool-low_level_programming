#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all numbers from n to 98
 * @n: Random number
 * Return: void
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
