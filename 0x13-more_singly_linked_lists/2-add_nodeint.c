#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the listint_t list
 * @head: double pointer to the listint_t list
 * @n:integer value to add to the new node
 *
 * Return: the address of the new element, or NULL if it fails
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *updated_node = malloc(sizeof(listint_t));

if (updated_node == NULL)
{
return (NULL) ;
}
updated_node->n = n;
updated_node->next = *head;
*head = updated_node;

return (updated_node);
}
