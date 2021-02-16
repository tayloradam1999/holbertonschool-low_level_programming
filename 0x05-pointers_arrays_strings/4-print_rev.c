#include "holberton.h"

/**
 * print_rev - Prints a string in reverse with a new line
 * @s: The string to reverse
 * Return: void
 */

void print_rev(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
	{
		x++;
	}

	for (; x >= 0; x--)
	{
		_putchar(*(s + (x - 1)));
	}

	_putchar('\n');
}
