#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes a node at a specific index
 * @head: double pointer to the head of the list
 * @index: index of the node to be removed, starting from 0
 *
 * Return: 1 if successful,0 otherwise
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *c, *temporary;
unsigned int i = 0;

if (head == NULL || *head == NULL)
{
return (-1);
}
if (index == 0)
{
temporary = *head;
*head = temporary->next;
free(temporary);
return (1);
}

c = *head;
while (c != NULL && i < index - 1)
{
c = c->next;
i++;
}

if (c == NULL || c->next == NULL)
{
return (-1);
}

temporary = c->next;
c->next = temporary->next;
free(temporary);
return (1);
}
