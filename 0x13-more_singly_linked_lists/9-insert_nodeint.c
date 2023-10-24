#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a given position
 * @head: double pointer to the head of the list
 * @idx: index where to insert the node
 * @n: data for the new node
 *
 * Return: the address of the new node,or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *updated_list,*c;
unsigned int i = 0;

if (head == NULL)
{
return NULL;
}
updated_list = malloc(sizeof(listint_t));
if (updated_list == NULL)
{
return NULL;
}
updated_list->n = n;
if (idx == 0)
{
updated_list->next = *head;
*head = updated_list;
return updated_list;
}

c = *head;
while (c != NULL && i < idx -1)
{
c = c->next;
i++;
} 
if ( c == NULL )
{
free(updated_list);
return NULL;
}

updated_list->next = c->next;
c->next = updated_list;

return updated_list;
}
