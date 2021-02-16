#include "holberton.h"

/**
 * rev_string - Reverses a string
 * @s: The string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int x = 0;
	int y = 0;
	char tmp[1000];

	while (*(s + x) != '\0')
	{
		*(tmp + x) = *(s + x);
		x++;
	}
	x = x -1;
	while (x >= 0)
	{
		*(s + x) = *(tmp + y);
		y++;
		x--;
	}
}
