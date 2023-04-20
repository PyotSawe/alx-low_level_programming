#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of itself.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char const *argv[])
{
	unsigned char opcode;
	int code_len, code_off;
	int (*_entry)(int, char const**) = main;

	if (argc != 2)
	{
		if (argc > 2)
		{
			printf("Error\n");
			exit(1);
		}
		else if (argc < 2)
		{
			printf("Error\n");
			exit(1);
		}
	}
	code_len = atoi(argv[1]);
	if (code_len < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (code_off = 0; code_off < code_len; code_off++)
	{
		opcode = *(unsigned char *)_entry;
		printf("%.2x", opcode);
		if (code_off < code_len)
			putchar(' ');
		_entry++;
	}
	printf("\n");
	return (0);
}
