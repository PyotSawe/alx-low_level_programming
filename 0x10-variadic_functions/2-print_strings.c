#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: sep of strs
 * @n: len of varargs
 * @...: varargs base
 *
 * Return: Void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	char *elem;
	unsigned int i;

	va_start(valist, n);
	/*process the varargs vec*/
	for (i = 0; i < n; i++)
	{
		elem = va_arg(valist, char *);
		/* Print iff not '\0'*/
		if (elem)
			printf("%s", elem);
		else
			printf("(nil)");
		/* If at end of str*/
		if (i < n - 1)
			/* It means you can safely add the separator*/
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}

