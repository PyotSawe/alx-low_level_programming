/**
 * swap_int - Swaps the values of two integers
 * @a: first integer
 * @b: second integer
*/

void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;/*Prepare a to receive value of b by saving its value*/
	*a = *b; /*Assign a the value of b*/
	*b = temp;/*Assign b the value of a*/
}
