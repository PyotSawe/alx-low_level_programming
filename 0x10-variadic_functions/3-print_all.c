#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: ordered list of all types
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	char *elem;
	int  plen, i = 0;

	while (format && *(format + i))
	{
		va_start(valist, format);
		while (*(format + (i++)))
		{
			plen = 1;
			switch (*(format + i))
			{
				case 'i':
					printf("%d", va_arg(valist, int));
					break;
				case 'c':
					printf("%c", va_arg(valist, int));
					break;
				case 'f':
					printf("%f", va_arg(valist, double));
					break;
				case 's':
					elem = va_arg(valist, char*);
					if (elem)
					{
						printf("%s", elem);
						break;
					}
					printf("(nil)");
					break;
				default:
					plen = 0;
					break;
			}
			if (*(format + i) && plen)
				printf(", ");
		}
		va_end(valist);
	}
	printf("\n");
}
