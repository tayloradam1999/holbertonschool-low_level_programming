#include "holberton.h"

/**
 * _putchar - Prints Holberton followed by a new line
 *
 * Return: No return
 */

int main(void)
{
	char t[10] = "Holberton";
	int a;

	for (a = 0; a <= 9; a++)
		_putchar(t[a]);

	_putchar('\n');
	return (0);
}


