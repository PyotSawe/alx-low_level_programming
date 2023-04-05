#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: chessboard
 */

void print_chessboard(char (*a)[8])
{
	/* Mark the parts of this Array */
	int line_i, column_i;

	/* Process each line */
	for (line_i = 0; line_i < 8; line_i++)
	{
		/* Process each character*/
		for (column_i = 0; column_i < 8; column_i++)
		{
			/*By Writing the character @a[line_i][column_i] to stdout*/
			_putchar(*(*(a + line_i) + column_i));
		}
		_putchar('\n');
	}
}
