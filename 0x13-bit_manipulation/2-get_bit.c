#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the number to be used to find the value of the bit at index
 * @index: is the index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int value;

	/* if index is more than 64 bits */
	if (index > sizeof(n) * 8 - 1) /* 63 bits*/
	{
		return (-1);
	}
	/*n = 98 = 1100010, index = 1 -> 1100010 >> 1 is 110001 -> 110001 & 1 */
	value = (n >> index) & 1;
	return (value);
}
