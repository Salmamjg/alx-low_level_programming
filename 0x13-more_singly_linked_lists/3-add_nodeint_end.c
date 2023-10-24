#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the listint_t list
 * @head: double pointer to the listint_t list
 * @n: integer value to add to the new node
 *
 * Return: the address of the new element, or NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *updated_node_end = malloc(sizeof(listint_t));

if (updated_node_end == NULL)
{
return (NULL);
}
updated_node_end->n = n;
updated_node_end->next = NULL;
if (*head == NULL)
{
*head = updated_node_end;
}
else
{
listint_t *c = *head;
while (c->next != NULL)
{
c = c->next;
}
c->next = updated_node_end;
}
return (updated_node_end);
}
