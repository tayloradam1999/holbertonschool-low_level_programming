#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @x: gets the number
 * Return: last digit
 */

int print_last_digit(int x)
{
	int y;

	if (x >= 0)
		y = x % 10;

	else
		y = -x % 10;

	_putchar (y + '0');
	return (y);
}
