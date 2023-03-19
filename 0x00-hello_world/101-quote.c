#include <stdio.h>
#include <unistd.h>
/**
 *main - Entry point
 *Return: Always 1
 *
 */
int main(void)
{
	/*const int SYS_ERR = 2;*/
	/*const int MAX_BYTES = 59;*/
	write(2,
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
