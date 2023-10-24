#include "lists.h"

/**
 * sum_listint - returns the sum of the data n of listint_t list
 * @head: pointer to the head of the list
 * 
 * Return: sum of the data n of listint_t list,0 if the list is empty
*/

int sum_listint(listint_t *head)
{
int total = 0;

while (head != NULL)
{
total += head->n;
head = head->next;
}
return total;
}
