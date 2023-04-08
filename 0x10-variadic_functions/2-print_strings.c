#include <stdarg.h>
#include <string.h>
#include <stdio.h>

/**
 * print_strings - print variable number of strings
 *
 * @separator: string seperators
 * @n: number of string arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *string;
	va_list strarg;
	unsigned int i, j;

	va_start(strarg, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(strarg, char *);

		if (!string)
			printf("(nil)");
		else
			printf("%s", string);

		if (i < n - 1)
		{
			if (separator)
			{
				for (j = 0; j < strlen(separator); j++)
					putchar(separator[j]);
			}
		}
	}

	printf("\n");

	va_end(strarg);
}
