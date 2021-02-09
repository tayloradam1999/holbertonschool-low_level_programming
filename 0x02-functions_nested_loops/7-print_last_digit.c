#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @x: gets the number
 * Return: last digit
 */

int print_last_digit(int x)
{
	x = x % 10;

	if (x < 0)
		n = -n;
	
	_putchar(n + '0');
	return (x);
}
