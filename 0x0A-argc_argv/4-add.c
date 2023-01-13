#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point; multiply given numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, result, zero;

	result = 0;

	/* check if only one argument (function name) is passed*/
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* iterate over argc and print result or return error if char is found*/
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				printf("Error\n");
				return (1);
			}

			if (*argv[i] == '0')
				zero = 1;
		}

		result += atoi(argv[i]);
	}
	if (result > 0)
		printf("%d\n", result);
	if (zero == 1 && result <= 0)
		printf("%d\n", 0);

	return (0);
}
