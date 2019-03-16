#include "variadic_functions.h"

/**
 * _print_char - function that prints a char
 * @ap: the argument to print
 *
 * Return: nothing
 */

void _print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * _print_int - function that prints an integer
 * @ap: the argument to print
 *
 * Return: nothing
 */

void _print_int(va_list ap)
{
	printf("%i", va_arg(ap, int));
}

/**
 * _print_float - function that prints a float
 * @ap: the argument to print
 *
 * Return: nothing
 */

void _print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * _print_string - function that prints a string
 * @ap: the argument to print out
 *
 * Return: nothing
 */

void _print_string(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);

	if (!s)
	{
		s = "(nil)";
	}
	printf("%s", s);
}

/**
 * print_all - function that prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	po_t array[] = {
		{"c", _print_char},
		{"i", _print_int},
		{"f", _print_float},
		{"s", _print_string},
		{NULL, NULL},
	};
	int i = 0, j;
	char *separator = "";
	va_list ap;

	va_start(ap, format);

	while (format[i] && format)
	{
		j = 0;
		while (array[j].po)
		{
			if (format[i] == *array[j].po)
			{
				printf("%s", separator);
				array[j].f(ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
