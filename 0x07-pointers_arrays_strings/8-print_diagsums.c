#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: ptr to 2 D array.
 * @size: dimensions of the matrix
 * Return: no return.
 */

void print_diagsums(int *a, int size)
{
	int num_i, diag_sum = 0, diag_sum2 = 0;

	/*Process 2D array as one dim array*/
	for (num_i = 0; num_i < size; num_i++)
	{
		diag_sum += a[(size * num_i) + num_i];
		diag_sum2 += a[(size * (num_i + 1)) - (num_i + 1)];
	}
	/* Print the results on the sme line */
	printf("%d, %d\n", diag_sum, diag_sum2);
}
