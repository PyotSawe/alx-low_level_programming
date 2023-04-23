#include <stdio.h>

/**
 * main - Prints all args
 * @argc: The number of args.
 * @argv: An array of pointers
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int param;
	/* print args on each line*/
	for (param = 0; param < argc; param++)
		printf("%s\n", argv[param]);
	return (0);
}

