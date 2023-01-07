#include "main.h"

/**
 * _puts_recursion - iterate and print a string using recursion
 *
 * @s: string to be printed
 *
 * Return: return 0 if string has reached end
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	if (*s == '\0')
		_putchar('\n');
}
