#include "holberton.h"

/**
 * puts_half - Prints the second half of a string
 * @str: The string to be halved
 * Return: void
 */

void puts_half(char *str)
{
	int x = 0;
	int halfx;

	while (*(str + x))
	{
		x++;
	}
	if (x % 2 == 1)
	{
		halfx = (x - 1) / 2;
		halfx = x - halfx;
	}
	else
	{
		halfx = x / 2;
	}
	for (; *(str + halfx) != '\0'; halfx++)
	{
		_putchar(*(str + halfx));
	}
	_putchar('\n');
}
