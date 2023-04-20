#include <stdlib.h>

/**
 * print_name - prints a given name
 * @name: name arg
 * @f: pointer function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	/* handle caller input errors */
	if (f != NULL && name != NULL)
		f(name);
}
