#include <stdio.h>
/**
 *main - print all combinations of three different digits
 *Return: Always 0 (Success)
 */
int main(void)
{
	int ones_digit;
	int tens_digit;
	int hundreds_digit;

	for (hundreds_digit = '0'; hundreds_digit <= '9'; hundreds_digit++)
	{
		for (tens_digit = (hundreds_digit + 1); tens_digit <= '9'; tens_digit++)
		{
			for (ones_digit = (tens_digit + 1); ones_digit <= '9'; ones_digit++)
			{
				putchar(hundreds_digit);
				putchar(tens_digit);
				putchar(ones_digit);
				if (hundreds_digit != '7' || tens_digit != '8' || ones_digit != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
