#include <stddef.h>

/**
 * int_index - searches for an integer.
 * @array: elements to search
 * @size: number of this elements
 * @cmp: comparator to match the searched pattern
 *
 * Return: returns the index of the first element for which the
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a_i = 0;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	while (a_i < size)
	{
		/* Use stdlib */
		if (cmp(*(array + a_i)))
			return (a_i);
		a_i++;
	}
	return (-1);
}
