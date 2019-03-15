#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *s;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(list, char *);
		if (separator)
		{
			if (s)
			{
				printf("%s", s);
			}
			else
			{
				printf("(nil)");
			}
			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
		else
		{
			return;
		}
	}
	printf("\n");
	va_end(list);
}
