#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

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

/**
 * argstostr - Concatenates all args
 * @ac: Argc
 * @av: argv[]
 * Return: All strings combined
 */

char *argstostr(int ac, char **av)
{
	int x, y, z = 0;
	int size = 0;
	char *p;

	if (ac == 0 || av == NULL) /* size of entire 2d array */
	{
		return (NULL);
	}

	for (x = 0; x < ac; x++)
	{
		size = size + _strlen(av[x]) + 1;
	}

	p = malloc(size * sizeof(char) + 1); /* no need to int* + add null */

	if (p == NULL)
	{
		return (NULL);
	}


	for (x = 0; x < ac; x++)
	{
		y = 0;
		while (av[x][y])
		{
			*(p + z) = av[x][y];
			z++;
			y++;
		}

		*(p + z) = '\n';
		z++;

	}

	*(p + z) = '\0';
	return (p);
}
