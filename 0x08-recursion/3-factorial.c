/**
 * factorial - compute the factorial of a number
 *
 * @n: given number
 *
 * Return: factorial of number n
 */

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}

	if (n == 0)
		return (1);

	if (n < 0)
		return (-1);

	return (0);
}
