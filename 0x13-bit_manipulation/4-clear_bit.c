#include "holberton.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: the number given to be used to set the desired bit to 0
 * @index: is the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* used Arthur's review as a basis */
	if (index > sizeof(n) * 8 - 1)
	{
		return (-1);
	}

	/* can also use: */
	/*if ((1UL << index) & *n)*/
	/* *n ^= (1L << index);*/

	/* n = 98 = 1100010, index = 1 */
	/* 1100010 & ~(b1 << 1) -> 1100010 & ~10 -> 1100010 & 01 */
	/* -> 1100000 = 96 */

	/* n = 1024 = 10000000000, index = 10 */
	/* 10000000000 & ~(b1 << 10) -> 10000000000 & ~10000000000 */
	/* -> 10000000000 & 00000000001 -> 00000000000 = 0 */

	*n &= ~(1UL << index);
	/* *n = *n = ~(1UL << index); */

	return (1);
}
