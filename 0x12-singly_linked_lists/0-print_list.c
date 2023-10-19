#include <stdio.h>
#include "lists.h"

/*
*print_list : prints the elements of list_t linked list
*@h : pointer to the linked list list_t that we are going to print
*
*Return : the number of nodes
*/

size_t print_list(const list_t *h){
       size_t count = 0;
       list_t *ptr = (list_t *)h;

       if(h == NULL){
        printf("Linked List is empty");
        return count;
       }
    
      while (ptr != NULL){
        printf("%s\n", ptr->str);
        ptr = ptr->next;
        count++;
      }

      printf("\n");
      return count;

}