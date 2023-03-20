#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	int num = 48;

	for (; num <= 63; num++)
	{
		if (num > 57)
		{
			putchar(num + 39);
		}
		else
			putchar(num);
	}
	putchar('\n');
	return (0);
}
