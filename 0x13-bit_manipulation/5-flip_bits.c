#include "holberton.h"

/**
 * flip_bits - function that returns the number of bits you would need to
 * flip to get from one number to another
 * @n: the number given
 * @m: the number given
 *
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int max_bits = sizeof(n) * 8;
	unsigned long int num = n ^ m;
	unsigned long int i = 0;
	unsigned long int count = 0;

	while (i < max_bits)
	{
		if (num & 1)
		{
			count++;
		}
		num = num >> 1;
		i++;
	}
	return (count);
}

/* 1024, 3 = b10000000000, b11 -> b10000000000 ^ b11 & 1 -> 10000000011 & 1 */
/* is true then count is 1 -> num = 10000000011 >> 1 -> num = 1000000001 */
/* -> 1000000001 & 1 -> is true so count is 2 -> num = 1000000001 >> 1 */
/* num = 100000000 -> 100000000 & 1 -> is not true so stop and return count */

/* 1024, 1025 = b10000000000, b10000000001 -> 10000000000 ^ 10000000001 & 1 */
/* b100000000001 & 1 -> true so count is 1 -> num = b10000000001 >> 1 */
/* -> num = b1000000000 -> b1000000000 & 1 -> is not true so count is 1 */
