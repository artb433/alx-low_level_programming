#include "main.h"

/**
 * print_diagonal - print lines on the terminal
 * @n: length of lines in "_" to be printed
 */

void print_diagonal(int n)
{
	int start;
	int whitespace;

	start = 1;

	if (n > 0)
	{
		while (start <= n)
		{
			whitespace = 1;

			while (whitespace < start)
			{
				_putchar(' ');
				whitespace++;
			}

			_putchar('\\');
			_putchar('\n');
			start++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
