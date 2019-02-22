#include "holberton.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @s: a pointer to an integer array
 * @n: size of the integer array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int temp;
	int frontValue;
	int endValue;

	frontValue = 0;
	endValue = n - 1;

	while (frontValue < endValue / 2)
	{
		temp = a[frontValue];
		a[frontValue] = a[endValue];
		a[endValue] = temp;
		frontValue++;
		endValue--;
	}
}
