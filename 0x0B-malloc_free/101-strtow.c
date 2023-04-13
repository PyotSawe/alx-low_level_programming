#include <stdlib.h>

void clr_page(char **grid, unsigned int height);

/**
 * strtow - splits a string into words.
 * @str: string to split
 *
 * Return: pointer of an array of integers
 */

char **strtow(char *str)
{
	char **a;
	unsigned int c, height, i, j, l1;

	if (str == NULL || *str == '\0')
		return (NULL);
	/* Process the pge of words */
	for (c = height = 0; str[c] != '\0'; c++)
	{
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	}
	/* Allocte mem and catch exceptions*/
	a = malloc((height + 1) * sizeof(char *));
	if (a == NULL || height == 0)
	{
		free(a);
		return (NULL);
	}
	/* Start spliting process*/
	for (i = l1 = 0; i < height; i++)
	{
		for (c = l1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
			l1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				a[i] = malloc((c - l1 + 2) * sizeof(char));
				if (a[i] == NULL)
				{
					clr_page(a, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; l1 <= c; l1++, j++)
			a[i][j] = str[l1];
		a[i][j] = '\0';
	}
	a[i] = NULL;
	return (a);
}

/**
 * clr_page - frees a 2 dimensional array.
 * @grid: multidimensional array of char.
 * @height: height of the array.
 *
 * Return: no return
 */
void clr_page(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}
