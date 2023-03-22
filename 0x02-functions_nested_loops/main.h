#ifndef MAIN_H
#define MAIN_H
/**
 * _putchar - writes the given string 
 * @chr: The char to 
 *
 * Return: On success ONE.
 * On error, -1 is returned.
 */
int _putchar(char chr);
/**
 * print_alphabet - print lowercase alphabets
 */
void print_alphabet(void);
/**
 * print_alphabet_x10 - print lowercase alphabets ten times
 */
void print_alphabet_x10(void);
/**
 * _islower - checks for lowercase characters
 * @c: the character to check
 * Return: On Success 1.
 * On error, 0
 */
int _islower(int c);
/**
 * _isalpha - checks for alphabetical char
 * @c: character to check
 * Return: 1 if lower or uppercase, 0 if not found
 */
int _isalpha(int c);
/**
 * print_sign - print sign of number
 * @n: number to check
 * Return: 1 if greater than 0, 0 if 0, -1 if less than 0
 */
int print_sign(int n);
/**
 * _abs - computer absolute value of integer
 * @int: integer
 * Return: absolute value
 */
int _abs(int num);
/**
 * print_last_digit - print last digit of integer
 * @int: integer
 * Return: last digit of number
 */
int print_last_digit(int);
/**
 * jack_bauer - print every minute of a day
 * Description: print minutes 00:00 to 23:59
 */
void jack_bauer(void);
/**
 * times_table - print multiplication table
 */
void times_table(void);
/**
 * add - add two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of the to
 */
int add(int, int);
/**
 * print_to_98 - print numbers n to 98
 * @n: integer argument to start ith
 */
void print_to_98(int n);
/**
 * print_times_table - print multiplication table up to n
 * @n: integer argument
 */
void print_times_table(int n);
#endif
