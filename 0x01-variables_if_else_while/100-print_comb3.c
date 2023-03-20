#include <stdio.h>
/**
 *main - Entry point, print 00 to 99 using putchar
 *Return: Always 0 (Success)
 */
int main(void)
{
	int part_a;
	int part_b;

	for (part_a = '0'; part_a <= '9'; part_a++)
	{
		for (part_b = '0'; part_b <= '9'; part_b++)
		{
			putchar(part_a);
			putchar(part_b);
			if (!(part_a == '9' && part_b == '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
