#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: the square matrix that we orint the sum of
 * @size: the size of the matrix
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i;

	/* Initialize sums of diagonals */
	int d1 = 0;
	int d2 = 0;

	for (i = 0; i < size; i++)
	{
		/* finding sum of primary diagonal */
		/* d1 += a[(3 * 1) + 1] -> move to index 4 from index 0*/
		d1 += a[(size * i) + i];

		/* finding sum of secondary diagonal */
		/* d2 += a[(5 * (0 + 1)) - (0 + 1)] */
		/* d2 += a[(5 * 1) - 1] -> a[5 - 1]*/
		/* -> move to index 5 from index 0 then back to index 4 */
		d2 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", d1, d2);
}
