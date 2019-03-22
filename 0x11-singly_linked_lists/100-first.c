#include <stdio.h>

void stuff(void) __attribute__((constructor));

/**
 * stuff - function that prints a string before the main executes
 *
 * Return: nothing
 */

void stuff(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
