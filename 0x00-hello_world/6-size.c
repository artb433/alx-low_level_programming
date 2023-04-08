#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*declare variables to hold data types*/
	int cs = sizeof(char);
	int is = sizeof(int);
	int ls = sizeof(long);
	int lls = sizeof(long long);
	int fs = sizeof(float);

	printf("Size of a char: %d byte(s)\n", cs);
	printf("Size of an int: %d byte(s)\n", is);
	printf("Size of a long int: %d byte(s)\n", ls);
	printf("Size of a long long int: %d byte(s)\n", lls);
	printf("Size of a float: %d byte(s)\n", fs);

	return (0);
}
