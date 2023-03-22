/**
 * print_last_digit - print last digit of integer
 * @num: num to extract the last digit
 * Return: last digit of number
 */

int print_last_digit(int num)
{
	if (num == 0)
		return (0);
	else if (num > 0)
		return (num % 10);
	else if (num < 0)
		return ((-1 * num) % 10);
}
