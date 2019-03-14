#include "3-calc.h"

/**
 * get_op_func - that selects the correct function to perform the
 * operation asked by the user
 * @s: the operator passed as argument to the program
 *
 * Return: the function pointer to an operator
 */

int (*get_op_func(char *s))(int, int)
{
	/* had help from Tu showing me where and how to use strcmp */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i = 0;

	while (i != 5)
	{
		/* If the operator in ops and the string operator given match */
		/* then, return the correct function associated */
		if (!(strcmp(ops[i].op, s)))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
