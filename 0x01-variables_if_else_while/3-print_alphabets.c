#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	/*Information*/
	const char UPPER_BASE = 64;
	const char UPPER_BOUNDARY = 91;
	const char LOWER_BASE = 97;
	const char LOWER_BOUNDARY = 123;

	/*Current State Of Universe*/
	char st = LOWER_BASE;
	char group = 0;

	for (; st <= LOWER_BOUNDARY; st++)
	{
		if (st <= UPPER_BOUNDARY)
		{
			if (st == UPPER_BOUNDARY)
				break;
		}
		if (st == LOWER_BOUNDARY)
		{
			st = UPPER_BASE;
			group = 1;
			continue;
		}
		switch (group)
		{
		case 0:
			putchar(st);
			break;
		case 1:
			putchar(st);
			break;
		default:
			puts("Couldn't Find what to do");
		}
	}
	putchar('\n');
	return (0);
}

