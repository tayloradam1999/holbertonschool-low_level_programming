#include "holberton.h"

/**
 * _strlen - Returns the length of a string
 * @s: String
 * Return: Length
 */

int _strlen(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
	{
		x++;
	}
	return (x);
}
