#include <stdarg.h>
#include <string.h>
#include <stdio.h>

/**
 * print_numbers - print numbers with the seperator
 *
 * @separator: numbers seperator
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, j;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));

		if ((separator != NULL) && (i != n - 1))
		{
			for (j = 0; j < strlen(separator); j++)
				printf("%c", separator[j]);
		}
	}

	printf("\n");

	va_end(arg);
}
