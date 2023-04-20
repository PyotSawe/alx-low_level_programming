#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: string to separate nums
 * @n: number of input integers
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list v_args;
	unsigned int args_i;

	va_start(v_args, n);
	for (args_i = 0; args_i < n; args_i++)
	{
		printf("%d", va_arg(v_args, int));
		/* don't print iff NULL*/
		if (separator == NULL || *separator == '\0')
			continue;
		if (args_i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(v_args);
}

