#include "holberton.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int a, b, x, y;
	int z = 0;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			a = z / 10;
			b = z % 10;
			if (z > 9)
			{
				_putchar(a + '0');
			}
			if (z < 10 && y > 0)
			{
				_putchar(' ');
			}
			_putchar(b + '0');
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			z = z + x;
		}
	_putchar('\n');
	z = 0;
	}
}
