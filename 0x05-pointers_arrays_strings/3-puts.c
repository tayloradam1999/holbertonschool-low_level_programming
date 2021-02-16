#include "holberton.h"

/**
 * _puts - Prints a string with a new line to stdout
 * @str: The string
 * Return: void
 */

void _puts(char *str)
{
	int x = 0;

	while (*(str + x) != '\0')
	{
		_putchar(*(str + x));
		x++;
	}
	_putchar('\n');
}
