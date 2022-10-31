#include "insertion_sort.h"
#include "linked_list.h"



void sort(linked_list *llPtr)
{
 // Add your sort function here
 //The first node to look at is the second one since the first note is already sorted.
 node_t* curr = llPtr->head->next;
 node_t* prev = llPtr->head;

 node_t* temp;

//Loop over the whole list.
 while(curr != NULL){
    //Prev signifies not only the previous note but also the end of the sorted segment.
    //So if curr.data smaller than prev.data it means it's not sorted.
    if (curr->data < prev->data) {
        //Prev need to point to curr's next element and curr needs to be moved.
        prev->next=curr->next;

        /*find where curr belongs by looping from the beginning of the list to the point where curr
        * is larger than or equal to the current element. This is where curr belongs.
        */
        temp = llPtr->head;
        while (temp->next->data <= curr->data) {
            temp = temp->next;
        }

        //Special case if the first element needs to be swapped.
        if (llPtr->head==temp) {
            curr->next=llPtr->head;
            llPtr->head = curr;

        } else {
            //Put curr inbetween temp and temp.next.
            curr->next = temp->next;
            temp->next = curr;
        }
    }
    //Move prev and curr to check the next element in the list.
    //prev still points to the largest element that has been sorted.
    prev = curr;
    curr = prev->next;
}
}
