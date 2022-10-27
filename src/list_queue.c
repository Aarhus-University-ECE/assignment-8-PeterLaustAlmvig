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
  q->rear = element;
  element->data = x;
  q->size++;
  if(q->size == 1){
    q->front = element;
  }
  
}

int dequeue(queue *q)
{
  // Add your dequeue function
  assert(q->size != 0);
  int x = q->front->data;
  q->size--;
  if(q->size == 0){
    q->rear = NULL;
    q->front = NULL;
  }else if(q->size >= 1){
    q->front->next = q->front;
  }
  return x;
}