#include "list_queue.h"


void init_queue(queue *q)
{
  // Add your init_queue
  q->size = 0;
  q->front = NULL;
  q->rear = NULL;
}

int empty(queue *q)
{
  // Add your empty function
  return q->size == 0;
}

void enqueue(queue *q, int x)
{
  // Add your enqueue function

  //add node to end
  qnode *element = malloc(sizeof(qnode));
  element->next = q->rear;
  element->data = x;
  q->rear = element;
  
  q->front = q->rear;
  for(int i = 0; i<q->size; i++){
    q->front = q->front->next;
  }
  q->size++;
}

int dequeue(queue *q)
{
  // Add your dequeue function
  assert(q->size != 0);
  int x = q->front->data;

  q->front = q->rear;
  for(int i = 0; i<q->size; i++){
    //rintf("before: q.front.data = %d\t", q->front->data);
    if(q->front->next != NULL){
      q->front = q->front->next;
    }
  }
  q->size--;
  return x;
}