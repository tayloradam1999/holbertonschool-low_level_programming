#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - Copies a given char
 * @s: Given string to be copied
 * @b: Input
 * @n: Number of bytes
 * Return: Copied string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: How many elements of the array we are allocating
 * @size: How many bytes we are allocating
 * Return: Void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}

	_memset(p, 0, (nmemb * size));

	return (p);
}
