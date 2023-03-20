#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	int part = 48;

	while (part <= 57)
	{
		putchar(part);
		if (part < 57)
		{
			putchar(44);
			putchar(32);
		}
		part++;
	}
	return (0);
}
