#include "main.h"

/**
 * print_square - print a square
 * @size: dimensions of the square
 */

void print_square(int size)
{
	int rows;
	int cols;

	rows = 1;

	if (size > 0)
	{
		while (rows <= size)
		{
			cols = 1;

			while (cols <= size)
			{
				_putchar('#');
				cols++;
			}

			_putchar('\n');
			rows++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
