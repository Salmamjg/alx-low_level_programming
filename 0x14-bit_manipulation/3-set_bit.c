#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to the unsigned long int.
 * @index: index of the bit be set to 1.
 *
 * Return:1 if it worked, -1 otherwise.
*/

int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(*n) * 8)
{
return (-1);
}
*n |= (1UL << index);
return (1);
}