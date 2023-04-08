#include "main.h"

/**
 * print_sign - check for the sign of a number
 *
 * @n: number to be checked
 *
 * Return: return corresponding values based on checks
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	return (0);
}
