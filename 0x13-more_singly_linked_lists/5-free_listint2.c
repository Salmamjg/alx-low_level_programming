#include "lists.h"

/**
 * free_listint2 - free a listint_t linked list and sets the head to NULL
 * @head: double pointer to the listint_t list
*/

void free_listint2(listint_t **head)
{
listint_t *c;

while (*head != NULL)
{
c = *head;
*head = (*head)->next;
free(c);
}
*head = NULL;
}
