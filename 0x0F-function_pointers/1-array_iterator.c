#include <stddef.h>
/**
 * array_iterator - Executes a function given as a
 *                  parameter on each element of an array.
 * @array: The array.
 * @size: The size of array.
 * @action: A pointer to the function to be executed.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a_i = 0;
	/* assert that args should never be null */
	if (array != NULL && action != NULL)
	{
		/* process array given using given tool (action) */
		for (; a_i < size; ++a_i)
			action(*(array + a_i));
	}
}
