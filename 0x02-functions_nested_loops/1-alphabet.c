#include "main.h"

/**
 * print_alphabet - Print lowercase alphabets
 *
 * Return: No return value
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}

	_putchar('\n');
}
