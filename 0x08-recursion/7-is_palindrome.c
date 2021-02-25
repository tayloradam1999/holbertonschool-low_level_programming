#include "holberton.h"

/**
 * my_len - finds length of string
 * @s: string in question
 * Return: Length
 */

int my_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + my_len(s + 1));
}

/**
 * my_pal - Determins if palindrome
 * @x: Starts at beginning of string
 * @y: Starts at end of string
 * Return: 1 or 0
 */

int my_pal(int x, int y)
{
	if (x == y)
	{
		return (1);
	}
	if (x <= y)
	{
		return (0);
	}
	if (x != y)
	{
		return (0);
	}
	return (my_pal(x + 1, y - 1));
}

/**
 * is_palindrome - Recursions takes place
 * @s: The string in question
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int y;

	y = my_len(s);

	return (my_pal(s[0], s[y - 1]));
}
