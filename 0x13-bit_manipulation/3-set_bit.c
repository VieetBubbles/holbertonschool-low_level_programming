#include "holberton.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: the number given to be used to change the given index to 1
 * @index: is the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* if index is greater than 64 */
	if (index > (sizeof(n) * 8) - 1) /* 63 */
	{
		return (-1);
	}
	/* n = 98 = 1100010, index = 0 */
	/* 1100010 | b1 << 0 -> b1100010 | b1 -> b1100011 = 99 */

	/* n = 1024 = 10000000000, index = 5 */
	/* 10000000000 | b1 << 5 -> 10000000000 | b100000 */
	/* -> 10000100000 = 1056 */
	*n = *n | 1 << index;
	return (1);
}
