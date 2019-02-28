#include "holberton.h"

/**
 * _pow_recursion - function that returns the value of x raised
 * to the power of y
 * @x: the base
 * @y: the power raised
 *
 * Return: the result of x raised by y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
