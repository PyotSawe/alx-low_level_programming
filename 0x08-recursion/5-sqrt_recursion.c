int _nsqrt(int x, int y);

/**
 *_sqrt_recursion -  returns the natural square root of a number.
 *
 * @n: num
 *
 * Return: sqroot,If n does not have a natural square root
 * the function should return -1
 */
int _sqrt_recursion(int n)
{
	return (_nsqrt(n, 1));
}

/**
 *_nsqrt - natural sqrt
 * @x: int
 * @y: int
 * Return: n_sqrt
 */

int _nsqrt(int x, int y)
{
	/*Base case*/
	if (x < 0)
		return (-1);
	if ((y * y) > x)
		return (-1);
	if (y * y == x)
		return (y);
	/*Recursive case*/
	return (_nsqrt(x, y + 1));
}
