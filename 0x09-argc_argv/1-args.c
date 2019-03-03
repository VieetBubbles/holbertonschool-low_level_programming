#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: the number of argument in the prompt
 * @argv: the arguments being passed into the count
 *
 * Return: Always 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
