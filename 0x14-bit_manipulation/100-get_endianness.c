#include "holberton.h"

/**
 * get_endianness - Checks the endianness
 * Return: 0 if big, 1 if little
 */

int get_endianness(void)
{
	int x = 1;

	char *y = (char *)&x;

	if (*y + 48 == 48)
		return (0);
	else
		return (1);
}
