#include "lists.h"

/**
 * free_listint - frees a listint_t linked list
 * @head: pointer to the listint_t list
*/

void free_listint(listint_t *head)
{
listint_t *c;
while (head != NULL)
{
c = head;
head = head->next;
free(c);
}
}