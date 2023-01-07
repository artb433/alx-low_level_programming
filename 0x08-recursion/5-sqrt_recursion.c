/**
 * _sqrt_recursion - find the square root of given number
 *
 * @n: given number
 * @square: square of number n
 *
 * Return: square root or -1 if none
 */

int root(int n, int square);

int _sqrt_recursion(int n)
{
	int num = 0;
	int result;

	if (n > 1)
	{
		result = root(n, num);
		return (result);
	}

	if (n == 1)
		return (1);

	if (n < 0)
		return (-1);

	return (0);
}

/**
 * root - compute the root of num from main
 *
 * @n: number to get its root
 * @square: root of number num
 *
 * Return: result of computation
 */

int root(int n, int square)
{
	if (square * square == n)
		return (square);

	if (square == n / 2)
		return (-1);

	return (root(n, square + 1));
}
