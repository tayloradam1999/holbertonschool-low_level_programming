#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of ints
 * followed by a new line
 * @a: pointer input
 * @n: pointer input
 * Return: void
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", *(x + a));
		if (x != (n - 1))
		{
		printf(", ");
		}
	}
	printf("\n");
}
