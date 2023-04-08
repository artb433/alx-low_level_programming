/**
 * print_name - call a call back function with function pointer supplied
 *
 * @name: name to be passed as arg to callback
 * @f: pointer to callback that returns void
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		(*f)(name);
	}
}
