#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - a functioon that performs addition, subtraction,
 * multiplication and division
 * @argc: the number of arguments
 * @argv: the arguments given
 *
 * Return: 0 Always (Success)
 */

int main(int argc, char **argv)
{
	int num1, num2, result;
	int (*pop)(int, int);
	char optr;

	/* Had Tu help me with strcmp and usage of function pointers */
	/* Checks if the number of arguments is wrong */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* see's if the  operator in agrv[2] is correct */
	pop = get_op_func(argv[2]);
	if (!pop)
	{
		printf("Error\n");
		exit(99);
	}

	/* handles if the user tries to divide (/ or %) by 0 */
	optr = *argv[2];
	if ((optr == '/' || optr == '%') && !(strcmp(argv[3], "0")))
	{
		printf("Error\n");
		exit(100);
	}

	/* set the numbers to integer values*/
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	/* get the correct operator and calculate numbers as a integer */
	result = pop(num1, num2);

	/* Print out the calculated number */
	printf("%d\n", result);
	return (0);
}
