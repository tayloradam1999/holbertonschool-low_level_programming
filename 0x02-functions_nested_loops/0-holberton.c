#include "holberton.h"

/**
 * main - Prints Holberton followed by a new line
 *
 * Return: No return
 */

int main(void)
{
	int x;
	char *holberton = "Holberton\n";

	for (x = 0; x < 10; x++)
		_putchar(holberton[x]);
	return (0);
}
