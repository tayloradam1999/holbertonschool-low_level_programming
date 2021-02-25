#include "holberton.h"

/**
 * num - Returns the Square Root of a number
 * @x: input
 * @y: input
 * Return: The natural square root
 */

int num(int x, int y)
{
	if ((x * x) == y)
	{
		return (x);
	}
	if (x <= 0)
	{
		return (-1);
	}
	else
	{
		return (num((x - 1), y));
	}
}

/**
 * _sqrt_recursion - Evaluates the recursion
 * @n: input
 * Return: blahblah
 */

int _sqrt_recursion(int n)
{
	if (num(n, n) == -1)
	{
		return (-1);
	}
	else
	{
		return (num(n, n));
	}
}
