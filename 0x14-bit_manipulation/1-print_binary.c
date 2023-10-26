#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary reprensation of a number without % or /.
 * @n: The unsigned long integer to the printed in binary.
 *
 * Return: No return value.
*/

void print_binary(unsigned long int n)
{
int i;
int s = sizeof(n) * 8;
if (n == 0)
{
_putchar('0');
return;
}
for (i = s-1; i >= 0; i -- )
{
if ((n >> i) & 1)
{
_putchar('1');
}
else
{
putchar('0');
}
}
}
