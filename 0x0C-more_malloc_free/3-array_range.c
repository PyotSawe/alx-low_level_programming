#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: min val of integers.
 * @max: max val of integers.
 *
 * Return: If min > max  - NULL.
 *         else - a pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *arr, index, size;

	/* Handle caller Errors */
	if (min > max)
		return (NULL);
	/* Calculate size needed */
	size = ((max + 1) - min);
	/* Allocate  */
	arr = malloc(sizeof(int) * size);
	/* Handle mem sys exceptions */
	if (arr == NULL)
		return (NULL);
	/* Fill the arr starting from the min*/
	for (index = 0; index < size; index++)
		*(arr + index) = min++;
	return (arr);
}
