#include "main.h"

/**
 * print_line - print lines on the terminal
 * @n: length of lines in "_" to be printed
 */

void print_line(int n)
{
	int start;

	start = 1;

	if (n > 0)
	{
		while (start <= n)
		{
			_putchar('_');
			start++;
		}

		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
