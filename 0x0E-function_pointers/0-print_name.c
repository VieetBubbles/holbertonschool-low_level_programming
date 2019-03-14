#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: th name that is to be printed out
 * @f: the function pointer that prints the name
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
