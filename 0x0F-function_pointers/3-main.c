#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - function to make calculations
 * @argc: Number of command line arguments
 * @argv: array of elements
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	if (i == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", i);

	return (0);
}
