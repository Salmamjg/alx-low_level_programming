#include "main.h"

/**
 * clear_bit - clears the value of a bit to 0 at a given index.
 * @n: pointer to unsigned long int
 * @index: index of the bit to be cleared to 0.
 *
 * Return: 1 if it worked, or -1 if it not.
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(*n) * 8)
{
return (-1);
}
*n &= ~(1 << index);
return (1);
}