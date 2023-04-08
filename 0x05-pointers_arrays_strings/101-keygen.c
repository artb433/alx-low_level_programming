#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random valid passwords
 * Return: 0 at success
 */
int main(void)
{
	int counter;
	int pass;

	srand(time(NULL));
	counter = 0;

	while (counter <= 2645)
	{
		pass = (rand() % 128);
		counter += pass;

		printf("%c", pass);
	}

	printf("%c", 2772 - counter);
	return (0);
}
