#include "main.h"

/**
 * print_number - print an integer
 * @n: number to be printed
 */

void print_number(int n)
{
	/*You need positive integers only*/
	unsigned int printable;
	/*if n is negative*/
	if (n < 0)
	{
		/*Convert to unsigned*/
		printable = -n;
		/*Then *Prepend with '-' */
		_putchar('-');
	}
	/*Else positive*/
	else
	{
		printable = n;
	}
	/*if more than */
	if (printable / 10)
		/*Print the digit at highest total value recur until ones*/
		print_number(printable / 10);
	/*Finally print the last digit (Ones digit*/
	_putchar((printable % 10) + '0');
}
