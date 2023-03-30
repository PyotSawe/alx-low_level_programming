/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: An array to reverse
 * @n: number of elements of this array
*/

void reverse_array(int *a, int n)
{
	/*Mark what number of an array to start with*/
	int a_index = 0;
	/*Prepare where to store Value being swapped*/
	int swap_elem = 0;
	/*Process the Whole array*/
	while (a_index < (n - 1))
	{
		/*Move the number at the begining index to swap space*/
		swap_elem = *(a + a_index);
		/*Swap with last*/
		*(a + a_index) = *(a + (n - 1));
		/*Swap with copied first*/
		*(a + (n - 1)) = swap_elem;
		/*Move to numbers element*/
		a_index++;
		n--;
	}
}
