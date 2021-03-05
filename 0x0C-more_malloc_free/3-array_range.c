#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: Values to include in array (min to max)
 * @max: Values to include in array (min to max)
 * Return: Pointer to the array
 */

int *array_range(int min, int max)
{
	int *p, x, y = 0;

	if (min > max)
	{
		return (NULL);
	}

	/* We can find how many elements are in the array by */
	/* subtracting min from max, then we add 1 to account for max. */
	/* In this case, our main file assigns 0 to min, and 10 to max. */
	/* The array before adding 1 would be: */
	/* {0, 1, 2, 3, 4, 5, 6, 7, 8, 9} */
	/* And we obviously want the last element to be equivalent to */
	/* max's value, so we + 1 to get there. */

	p = malloc((max - min + 1) * sizeof(int));

	if (p == NULL)
	{
		return (NULL);
	}

	for (x = min; x <= max; x++)
	{
		p[y] = x;
		y++;
	}

	return (p);
}
