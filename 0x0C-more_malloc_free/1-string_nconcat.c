#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Gives length of string
 * @s: Counter
 * Return: Length as an int
 */

unsigned int _strlen(char *s)
{
	unsigned int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string to add to the first
 * @n: Amount of bytes from string 2 passed
 * Return: The two strings concatenated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int x, y;

	if (s1 == NULL)
	{
		s1 = "";
	}
	x = _strlen(s1);

	if (s2 == NULL)
	{
		s2 = "";
	}
	y = _strlen(s2);

	s = malloc((x + y) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (x = 0; s1[x] != '\0'; x++)
	{
		s[x] = s1[x];
	}

	for (y = 0; y < n; y++)
	{
		s[x] = s2[y];
		x++;
	}
	s[x] = '\0';

	return (s);
}
