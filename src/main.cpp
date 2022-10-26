extern "C"{
    // Add the header files required to run your main 
    #include "list_queue.h"
    #include "stdio.h"
}

// File for sandboxing and trying out code
int main(int argc, char **argv)
{
    queue q;
    init_queue(&q);
    printf("ENQUEUE: \n\n");
    //printf("front: %d\n", q.front->data);
    enqueue(&q, 5);
    printf("front: %d\n", q.front->data);
    enqueue(&q, 10);
    printf("front: %d\n", q.front->data);
    enqueue(&q, 15);
    printf("front: %d\n", q.front->data);
    enqueue(&q, 20);
    printf("front: %d\n", q.front->data);

    printf("DEQUEUE:\n\n");

    dequeue(&q);
    printf("front: %d\n", q.front->data);
    dequeue(&q);
    printf("front: %d\n", q.front->data);
    dequeue(&q);
    printf("front: %d\n", q.front->data);
    dequeue(&q);
    printf("front: %d\n", q.front->data);
    return 0;
}