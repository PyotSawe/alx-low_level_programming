#include <stdio.h>

/**
 * main - Prints the number of args
 * @argc: The number of args
 * @argv: but not used only to serve the .
 *
 * Return: Always 0.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	/* Print the last args*/
	printf("%d\n", (argc - 1));
	return (0);
}

