#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initalizes
 * it with a specific char.
 * @size: Size of array
 * @c: Char to initalize in array
 * Return: Size of array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;

	char *array = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		array[x] = c;
	}
	return (array);
}
