#include "holberton.h"
int find_SquareRoot(int value, int sqrt);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: the number entered
 *
 * Return: the square root of the number entered
 */

int _sqrt_recursion(int n)
{
	return (find_SquareRoot(n, 1));
}

/**
 * find_SquareRoot - helper function to find the square root
 * @value: the value entered to be calculated for square root
 * @sqrt: the square root of the value. If not then increment until it is
 *
 * Return: the sqrt if the sqrt exists for the value entered
 * or -1 if it does not exist
 */

int find_SquareRoot(int value, int sqrt)
{
	if (sqrt * sqrt == value)
	{
		return (sqrt);
	}

	else if (sqrt * sqrt > 0)
	{
		return (-1);
	}

	else
	{
		return (find_SquareRoot(value, sqrt + 1));
	}
}
