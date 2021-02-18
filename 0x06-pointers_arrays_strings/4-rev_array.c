#include "holberton.h"

/**
 * reverse_array - Reverses the content of an array of ints
 * @a: The array
 * @n: How many elements are in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x = 0, temp;

	for (x = 0; x < n; x++)
	{
		temp = a[n - 1];
		a[n - 1] = a[x];
		a[x] = temp;
		n--;
	}
}
