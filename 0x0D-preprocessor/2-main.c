#include <stdio.h>

/**
 * main - Program to print the file name of this translation unit
 *
 * Return: 0 on success, else 1 on failure
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
