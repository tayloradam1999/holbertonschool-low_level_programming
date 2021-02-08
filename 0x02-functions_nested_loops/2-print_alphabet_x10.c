#include "holberton.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times in
 * lowercase, followed by a new line
 *
 * Return: no return
 */

void print_alphabet_x10(void)
{
	int x = 0;
	char y = 'a';

	while (x < 10)
	{
		while (y <= 'z')
		{
			_putchar(y);
			y++;
		}
		_putchar('\n');
		x++;
		y = 'a';
	}
}
