#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program.
 * @ac: argument count.
 * @av: pointer to array of size ac.
 *
 * Return: NULL if ac == 0 or av == null
 */

char *argstostr(int ac, char **av)
{
	int s, i, j, size;
	char *a;

	if (ac == 0)
		return (NULL);
	/* Process the arg */
	for (s = i = 0; i < ac; i++)
	{
		if (*(av + i) == NULL)
			return (NULL);
		for (j = 0; *(*(av + i) + j) != '\0'; j++)
			s++;
		s++;
	}
	/* Allocate mem and catch execptions*/
	a = malloc((s + 1) * sizeof(char));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	/*Process command args terminated by '\n' */
	for (i = j = size = 0; size < s; j++, size++)
	{
		if (*(*(av + i) + j) == '\0')
		{
			a[size] = '\n';
			i++;
			size++;
			j = 0;
		}
		if (size < s - 1)
			a[size] = av[i][j];
	}
	a[size] = '\0';
	return (a);
}
