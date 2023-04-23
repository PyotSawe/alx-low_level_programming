#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two args
 * @argc: The number of args
 * @argv: An array of pointers to the args.
 *
 * Return: If the program receives two arguments - 0.
 *         If the program does not receive two arguments - 1.
 */
int main(int argc, char *argv[])
{
	int x, y, prod;
	/* Do nothing when args are wrong*/
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	/* Take converted int*/
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	prod = x * y;
	printf("%d\n", prod);
	return (0);
}

