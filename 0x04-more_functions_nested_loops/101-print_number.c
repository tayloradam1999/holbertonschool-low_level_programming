#include "holberton.h"

/**
 * print_number - Prints an int
 * @n: Number to be printed as an int
 * Return: void
 */

void print_number(int n)
{
	unsigned int x, y, z;

	y = n;
	x = 1;

	if (n < 0)
	{	
		_putchar('-');
		y = n * -1;
	}
	while (x * 10 <= y)
	{
		x = x * 10;
	}

	while (x != 0)
	{
		z = y / x;
		_putchar(z + '0');
		y = y - z * x;
		x = x / 10;
	}
}
