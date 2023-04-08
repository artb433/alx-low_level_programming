#include <stdio.h>

/**
 * main - Entry point for our program
 * Return: 0 to signify end
 */
int main(void)
{
	int num = 1;
	int max = 100;

	while (num <= max)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", num);
		}

		if (num != max)
			printf(" ");

		num++;
	}

	printf("\n");
	return (0);
}
