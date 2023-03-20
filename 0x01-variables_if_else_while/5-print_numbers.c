#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	char num = '0';

	for (; num <= '9'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
