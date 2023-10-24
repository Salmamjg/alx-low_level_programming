#include "lists.h"

/**
 * pop_listint - deletes the head node of the listint_t linked list
 * @head: double pointer to the listint_t list
 * 
 * Return: the data n of the deleted head node,or 0 if the list is empty
*/

int pop_listint(listint_t **head)
{
listint_t *c;
int data;

if (*head == NULL)
{
return 0;
}
c = *head;
data = c->n;
*head = c->next;
free(c);
return (data);
}
