#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grind - Returns a pointer to a 2 dimensional array
 * of pointers
 * @width: Width of array
 * @height: Height of array
 * Return: Pointer
 */

int **alloc_grid(int width, int height)
{
	int len = 0;
	int *ptr, **arr;
	int x, y;

	len = sizeof(int *) * height + sizeof(int) * height * width;

	arr = (int **)malloc(len);

	if (arr == NULL)
	{
		return (NULL);
	}

	ptr = (int *)(arr + height);

	for (x = 0; x < height; x++)
	{
		arr[x] = (ptr + width * x);
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			arr[x][y] = 0;
		}
	}

	return (arr);
}
