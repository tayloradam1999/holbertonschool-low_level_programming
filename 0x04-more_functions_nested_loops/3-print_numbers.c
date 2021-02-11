#include "holberton.h"

/**
 * print_numbers - prints numbers 0 to 9 with a new line
 *
 * Return: void
 */

void print_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}

	_putchar('\n');
}
