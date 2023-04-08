#include <stdarg.h>

/**
 * sum_them_all - sum all arguments passed
 *
 * @n: number of arguments
 * @...: variadic arg
 *
 * Return: result of sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int total;
	va_list arg;
	unsigned int i;

	if (n == 0)
		return (0);

	total = 0;
	va_start(arg, n);

	for (i = 0; i < n; i++)
		total += va_arg(arg, int);

	va_end(arg);

	return (total);
}
