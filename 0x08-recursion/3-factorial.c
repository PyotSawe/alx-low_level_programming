/**
 * factorial - returns the factorial of a given number.
 * @n: number!.
 * Return: If n is lower than 0, the function
 * should return -1 to indicate an error.
 * Factorial of 0 is 1
 * Factorial of n is n!
 */

int factorial(int n)
{
	/* Base case */
	/*for lower than zero */
	if (n < 0)
		return (-1);
	/*for zero */
	else if (n == 0)
		return (1);
	/*Recursive case */
	else
		return (n * factorial(n - 1));
}
