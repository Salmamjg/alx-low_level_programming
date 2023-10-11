#include "function_pointers.h"

/**
* int_index - Returns the index of the first element for which the
* comparison function returns true, or -1 if none match.
* @array: The array to search.
* @size: The number of elements in the array.
* @cmp: A pointer to the comparison function.
*
* Return: Index of the first matching element, or -1 if none match.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || size <= 0 || cmp == NULL)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}

    return (-1);
}
