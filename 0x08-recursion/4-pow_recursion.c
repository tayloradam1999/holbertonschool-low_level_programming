#include "holberton.h"

/**
 * _pow_recursion - Returns the value of x to the power of y
 * @x: base
 * @y: power
 * Return: The power of x and y
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
