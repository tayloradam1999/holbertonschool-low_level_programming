#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Integer
 * Return: Void
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(sizeof (*ptr));

	*ptr = b;

	return (ptr);

	exit(98);
}	
