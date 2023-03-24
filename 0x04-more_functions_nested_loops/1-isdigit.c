/**
 * _isdigit - Function that checks for a digit bt 0 to 9
 * @c: character to check if digit
 * Return: Upon success return 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}
