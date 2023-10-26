#include "main.h"

/**
 * get_bit - gives the value of a bit at a given index.
 * @n: the unsigned long integer.
 * @index: the index of the bit to retreive
 *
 * Return: the value of the bit at a given index
*/

int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(n) * 8)
{
return (-1);
}
return ((n >> index) & 1);
}
