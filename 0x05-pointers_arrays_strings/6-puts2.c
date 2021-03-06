#include "holberton.h"

/**
 * puts2 - Outputs every other char in a string
 * With a new line at the end
 * @str: The string to manipulate
 * Return: void
 */

void puts2(char *str)
{
	int x = 0;

	while (*(str + x) != '\0')
	{
		if (x % 2 == 0)
		{
			_putchar(*(str + x));
		}
		x += 1;
	}
	_putchar('\n');
}
