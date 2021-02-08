#include "holberton.h"

/**
 * print_alphabet - Print the alphabet in lowercase
 * followed by a new line
 *
 * Return: No return
 */

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);

	_putchar('\n');
}
