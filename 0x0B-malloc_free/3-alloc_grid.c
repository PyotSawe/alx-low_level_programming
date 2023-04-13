#include <stdlib.h>

/**
 * alloc_grid - creates 2D array of ints
 *
 * @width: width of 2D array
 * @height: height of 2D array
 *
 * Return: pointer to 2D array or NULL if failure
 */

int **alloc_grid(int width, int height)
{
	int **arry;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	arry = malloc(sizeof(int *) * height);
	if (arry == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arry[i] = malloc(sizeof(int) * width);
		if (arry[i] == NULL)
		{
			for (--i; i >= 0; i--)
				free(arry[i]);
			free(arry);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arry[i][j] = 0;
	return (arry);
}
