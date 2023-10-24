#include <stdio.h>
#include "lists.h"

/**
* print_listint -  prints the elements of a listint_t linked list
* @h: pointer to the list_t list
*
* Return: The number of nodes
*/

size_t print_listint(const listint_t *h)
{
size_t c = 0;    
if(h == NULL) 
{
return(0);
}     

while (h!=NULL)
{
printf("%d\n", h->n);
h = h->next;
c++;
}
return (c);

}