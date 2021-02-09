#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @x: gets the number
 * Return: last digit
 */

int print_last_digit(int x)
{
	int y;

	y = x % 10;
	if (y < 0)
	{
		y = y * -1;
	}

	_putchar(y + '0');
	return (y);
}
