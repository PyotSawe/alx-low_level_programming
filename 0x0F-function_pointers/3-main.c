#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Program to  performs simple operations.
 * @argc: size of arg vec
 * @argv: base of arg vec
 *
 * Description: Usage: calc num1 operator num2
 *               You can assume num1 and num2 are integers,
 *               so use the atoi function to convert them from
 *               the string input to int
 * The program prints the result of the operation, followed by a new line
 * Return: 0 on success, 98 on failure
 */

int main(int argc, char *argv[])
{
	int temp;
	char op;
	int (*op_func)(int, int) = NULL;

	/* if the number of arguments is wrong*/
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	/* Read op from commandline */
	op = *(argv[2]);
	/* if the operator is none of the above */
	if (!(op == '/' || op == '%' || op == '*' || op == '-' || op == '+'))
	{
		printf("Error\n");
		return (99);
	}
	/* if the user tries to divide (/ or %) by 0 */
	if ((op == '/' || op == '%') && argv[3])
	{
		printf("Error\n");
		return (100);
	}
	temp = op_func(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", temp);
	return (0);
}
