#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	char start_letter = 'a';

	for (; start_letter <= 'z'; start_letter++)
	{
		putchar(start_letter);
	}
	putchar('\n');
	return (0);
}
