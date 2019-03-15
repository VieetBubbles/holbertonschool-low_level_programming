#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: the number of arguments passed to the ...
 *
 * Return: the sum of the arguments passed or if n is 0, then return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	double sum = 0;
	unsigned int i;

	if (!n)
	{
		return (0);
	}
	/* initialize va-list for n number of arguments */
	va_start(list, n);

	/* access all the arguments assigned to va-list */
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}

	/* clean memory reserved for va-list */
	va_end(list);

	return (sum);
}
