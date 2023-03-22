#include "main.h"
#include <stdio.h>
/**
 *main - print lowercase a-z
 *Return: Always 0 (Success)
 */
int main(void)
{
    char msg[10] = {'_','p','u','c','h','a','r', '\n'};
    short index;
    for (index = 0; index <= 10; ++index) {
        _putchar(msg[index]);
    }
    return (0);
}
