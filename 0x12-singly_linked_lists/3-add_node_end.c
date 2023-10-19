#include "lists.h"
#include <string.h>


/**
* add_node_end - adds a new node at the end of a linked list 
* @head: double pointer to the list_t list
* @str: string to put in the new node
*
* Return: address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str){
   list_t *add_end =malloc(sizeof(list_t));

   if(add_end == NULL){
     return NULL;
   }

   add_end -> str = strdup(str);
   if(add_end -> str == NULL){
       free(add_end);
       return NULL;
   }
   
   add_end ->len =strlen(str);
   add_end ->next = NULL;

   if(*head == NULL){
      *head = add_end;
   }else{
       list_t *temp = *head;
       while(temp->next != NULL){
        temp = temp->next;
       }
       temp->next = add_end;
   }
   return add_end;
}