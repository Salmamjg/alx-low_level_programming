#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Convert binary number to unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted unsigned integer, or 0 if b is NULL or there is one or more chars in b that is not 0 or 1.
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int x = 0;
int i = 0;
if (b == NULL)
{
return 0;
}
while (b[i] != '\0')
{
if (b[i] == '0')
{
x <<= 1;
}
else if (b[i] == '1')
{
x = (x << 1) | 1;
}
else
{
return 0;
}
i++;
}
return x;
}
