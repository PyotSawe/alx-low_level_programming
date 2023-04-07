/**
 *_pow_recursion - returns the value of x raised to the power of y.
 * @x: base.
 * @y: exponent.
 * Return: exponentiation.
 */

int _pow_recursion(int x, int y)
{
	/*Base case*/
	/*For negative exponent*/
	if (y < 0)
		return (-1);
	/*For zero exponent*/
	else if (y == 0)
		return (1);
	/*Recursive case*/
	else
		return (x * _pow_recursion(x, y - 1));
}
