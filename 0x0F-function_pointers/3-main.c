#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: integer value
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*retfunc)(int, int);
	int retval;

	/* check argument count */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* assign values to a and b variables */
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	/* check if operator is a valid operator */
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (
		(*(argv[2]) == '/' && b == 0) ||
		(*(argv[2]) == '%' && b == 0)
		)
	{
		printf("Error\n");
		exit(100);
	}

	retfunc = get_op_func(argv[2]);
	retval = (*retfunc)(a, b);

	printf("%d\n", retval);

	return (0);
}
