#include <stdio.h>
/**
 *main - print 00 to 99 with no duplicate digits or combos: no 11, no 10 (01)
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int ones_digit;
	int tens_digit;

	for (tens_digit = '0'; tens_digit <= '9'; tens_digit++)
	{
		for (ones_digit = (tens_digit + 1); ones_digit <= '9'; ones_digit++)
		{
			putchar(tens_digit);
			putchar(ones_digit);
			if (tens_digit != '8' || ones_digit != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
