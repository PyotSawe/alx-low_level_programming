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
	int i = 0;
	/* Don't trust the caller */
	if (array != NULL && cmp != NULL)
	{
		/* Handle args exceptions */
		if (size <= 0)
			return (-1);
		/* process the array searching for integer */
		for (; i < size; ++i)
		{
			/* Check if matched searched int */
			if (cmp(*(array + i)))
				return (i);
		}
	}
	return (-1)
}
