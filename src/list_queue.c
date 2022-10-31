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
  //element->next = NULL;
  element->data = x;
  
  if(q->rear == NULL){
    q->rear = element;
    q->front = element;
    q->rear->next = NULL;
  }else{
    q->rear->next = element;
    q->rear = element;
  }
  q->size++;
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
  }else{
    q->front = q->front->next;
  }
  return x;
}