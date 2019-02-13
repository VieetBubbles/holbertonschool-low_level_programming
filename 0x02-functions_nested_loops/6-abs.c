#include "holberton.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @a: integer
 *
 * Return: the absolute value of int a
 */

int _abs(int a)
{
	if (a < 0)
	{
		return (a * -1);
	}
	else
	{
		return (a);
	}
}
