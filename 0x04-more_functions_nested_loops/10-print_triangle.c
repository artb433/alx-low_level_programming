#include "main.h"

/**
 * print_triangle - print triangles
 * @size: size of our triangle
 */

void print_triangle(int size)
{
	int counter;
	int inner_counter;
	int whitespace;

	counter = 1;

	if (size > 0)
	{
		while (counter <= size)
		{
			inner_counter = 1;
			whitespace = counter;

			while (whitespace < size)
			{
				_putchar(' ');
				whitespace++;
			}

			while (inner_counter <= counter)
			{
				_putchar('#');
				inner_counter++;
			}

			_putchar('\n');
			counter++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
