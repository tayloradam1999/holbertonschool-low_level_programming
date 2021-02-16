#include "holberton.h"

/**
 * _puts - Prints a string with a new line to stdout
 * @str: The string
 * Return: void
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
