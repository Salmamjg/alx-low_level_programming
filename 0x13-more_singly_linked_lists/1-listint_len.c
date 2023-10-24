#include "lists.h"

/**
 * listint_len - returns the number of elements in the listint_t list
 * @h: pointer to the listint_t list
 *
 * Return: number of elements in the list
 *
*/

size_t listint_len(const listint_t *h)
{
size_t c = 0;
while (h != NULL)
{
h = h->next;
c++;
}
return (c);
}
