#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Gives length of string
 * @s: Counter
 * Return: Length as an int
 */

char _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string, add this to the first string
 * Return: Combined string
 */

char *str_concat(char *s1, char *s2)
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

	s = (char *)malloc((x + y - 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (x = 0; s1[x] != '\0'; x++)
	{
		s[x] = s1[x];
	}

	for (y = 0; s2[y] != '\0'; y++)
	{
		s[x + y] = s2[y];
	}

	s[x + y] = s2[y];
	s2[y] = '\0';
	return (s);
}
