/**
 * swap_int - swap value of two variables
 * @a: first parameter
 * @b: second parameter
 */
void swap_int(int *a, int *b)
{
	int fnum;
	int snum;

	fnum = *a;
	snum = *b;

	*a = *(&snum);
	*b = *(&fnum);
}
