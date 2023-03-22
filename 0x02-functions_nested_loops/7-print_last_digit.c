/**
 * print_last_digit - print last digit of integer
 * @num: num to extract the last digit
 * Return: last digit of number
 */

int print_last_digit(int num)
{
	if (num == 0)
		return (0);
	return ((num < 0) ? ((-1 * num) % 10) : (num % 10));
}
