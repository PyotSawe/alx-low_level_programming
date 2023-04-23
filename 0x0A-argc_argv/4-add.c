#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints positive sum,
 * @argc: len of argv.
 * @argv: baseof argv.
 *
 * Return: If one of the numbers contains symbols
 */
int main(int argc, char *argv[])
{
	int nm, dig, sum = 0;

	/* Process the rgv*/
	for (nm = 1; nm < argc; nm++)
	{
		for (dig = 0; argv[nm][dig]; dig++)
		{
			/* throw error when neg or more than ten8*/
			if (argv[nm][dig] < '0' || argv[nm][dig] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[nm]);
	}
	printf("%d\n", sum);
	return (0);
}

