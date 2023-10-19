#include "lists.h"

/**
* free_list - frees a linked list
* @head: list_t list to be freed
*/

void free_list(list_t *head){
     list_t *c;

     while(head != NULL){
      c = head;
      head = head->next;
      free(c->str);
      free(c);
     }
}