int is_prime(unsigned int x, unsigned int i);

/**
 * is_prime_number - checks if n is prime.
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */

int is_prime_number(int n)
{
	/*Base case when n is zero*/
	if (n == 0)
		return (0);
	/*Base case when n is negative*/
	if (n < 0)
		return (0);
	/*Base case when n is 1*/
	if (n == 1)
		return (0);
	/*Recursive case*/
	return (is_prime(n, 2));
}

/**
 * is_prime - check if x is prime.
 * @x: input number.
 * @i: iterator.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime(unsigned int x, unsigned int i)
{
	if (x % i == 0)
	{
		if (x == i)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(x, i + 1));
}
