#include <stdio.h>

/*Forward declaration*/
void _initial(void) __attribute__((constructor));
/**
 *_initial - constructor function that performs init before main
 *
 * Return: always nothing
 */

void _initial(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

