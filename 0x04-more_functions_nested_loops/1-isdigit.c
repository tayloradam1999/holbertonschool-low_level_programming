#include "holberton.h"

/**
 * _isdigit - Checks for a digit
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
