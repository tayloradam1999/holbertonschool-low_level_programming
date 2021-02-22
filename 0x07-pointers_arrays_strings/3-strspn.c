#include "holberton.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: One of the two strings that are being compared
 * @accept: One of the two strings that are being compared
 * Return: Number of bytes where s consists only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int x, y, z;

	for (x = 0; s[x] != '\0'; x++)
	{
		z = 0;
		for (y = 0; accept[y] != '\0'; y++)
			if (accept[y] == s[x])
			{
				z = 1;
			}

			if (z == 0)
			{
				return (x);
			}
	}
	return (x);
}
