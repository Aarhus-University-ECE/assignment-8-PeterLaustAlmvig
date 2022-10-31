#include "insertion_sort.h"
#include "linked_list.h"



void sort(linked_list *llPtr)
{
 // Add your sort function here
 node_t* curr = llPtr->head->next;
 node_t* prev = llPtr->head;

 while(curr != NULL){
    if(curr->data < prev->data){
        
    }
 }
}
