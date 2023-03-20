#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	char last = 'z';

	for (; last >= 'a'; last--)
	{
		putchar(last);
	}

	return (0);
}
