#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer (2 D character array)
 * @b: 2D buffer.
 * @size: size of buffer.
 * Return: no return.
 */

void print_buffer(char *b, int size)
{
	int line_id, row_id, ascii_i;

	/*Don't do anything if size is ZERO*/
	if (size <= 0)
		printf("\n");
	/*Else do the hard work*/
	else
	{
		for (line_id = 0; line_id < size; line_id += 10)
		{
			/*Print Line in Number in Hexadecimal*/
			printf("%.8x:", line_id);
			/*Print the row represented as Hexadecimal Values as bytes */
			for (row_id = line_id; row_id < line_id + 10; row_id++)
			{
				if (row_id % 2 == 0)
					printf(" ");
				if (row_id < size)
					printf("%.2x", *(b + row_id));
				else
					printf("  ");
			}
			/*Print ASCII Representation on Last Column*/
			printf(" ");
			for (ascii_i = line_id; ascii_i < line_id + 10; ascii_i++)
			{
				if (ascii_i >= size)
					break;
				if (*(b + ascii_i) < 32 || *(b + ascii_i) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + ascii_i));
			}
			printf("\n");
		}
	}
}
