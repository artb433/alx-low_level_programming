/**
 * is_prime_number - check if a number is a prime number
 *
 * @n: number to be checked
 * @divide: number to divide n by
 *
 * Return: return 1 if n is prime, 0 otherwise
 */

int prime_check(int n, int divide);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime_check(n, 2));
}

/**
 * prime_check - check for prime number
 *
 * @n: number to be checked
 * @divide: divide num be <-
 *
 * Return: 1 if prime, 0 otherwise
 */

int prime_check(int n, int divide)
{
	if (divide < n)
	{
		if (n % divide == 0)
			return (0);

		if (divide == n / 2)
			return (1);
	}

	return (prime_check(n, divide + 1));
}
