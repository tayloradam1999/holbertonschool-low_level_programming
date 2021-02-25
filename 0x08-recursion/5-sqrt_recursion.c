#include "holberton.h"

/**
 * _sqrt_recursion - Returns the Square Root of a number
 * @n: Number to find the square root of
 * num - sqrt function
 * @x: input
 * @y: input
 * Return: The natural square root
 */

float num(float x, float y)
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
