#include "holberton.h"

/**
 * num - Determins output value
 * @x: Square root of y
 * @y: Number to be tested
 * Return: num recursion
 */

int num(int x, long y)
{
	if ((x * x) == y)
	{
		return (x);
	}
	if ((x * x) > y)
	{
		return (-1);
	}
	return (num((x + 1), y));
}

/**
 * _sqrt_recursion - Evaluates the recursion in num function
 * @n: input from main
 * Return: Square root of an int
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (num(1, n));
}
