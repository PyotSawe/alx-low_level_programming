#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum numof coins
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of ptrs.
 * Return: If the number of args
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	/* Do nothing when rgs re more*/
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	/*Take cents as converted to int */
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		/* Use continue to process in step by jumping to specific part*/
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);
	return (0);
}

