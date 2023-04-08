#include "main.h"

/**
 * print_alphabet_x10 - print a-z on 10 lines
 *
 * Return: No return value
 */
void print_alphabet_x10(void)
{
	int lines;
	char alpha;

	for (lines = 1; lines <= 10; lines++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}

		_putchar('\n');
	}
}
