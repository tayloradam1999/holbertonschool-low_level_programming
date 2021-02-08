#include "holberton.h"

/**
 * _islower - Checks for lowercase characters
 *
 * Return: no return
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
	return (0);
}
