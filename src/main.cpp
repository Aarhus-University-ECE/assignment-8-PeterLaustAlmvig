extern "C"{
    // Add the header files required to run your main 
    #include "list_queue.h"
    #include "stdio.h"
}

// File for sandboxing and trying out code
int main(int argc, char **argv)
{
    queue q1;
    init_queue(&q1);
    
    // Test enqueue then dequeue
    enqueue(&q1,-5);
    assert(q1.front->data = -5);
    assert(q1.rear->data = -5);
    enqueue(&q1,10);
    assert(q1.front->data = 10);
    assert(q1.rear->data = -5);
    enqueue(&q1,0);
    assert(q1.front->data = 0);
    assert(q1.rear->data = -5);
    enqueue(&q1,5);
    assert(q1.front->data = 5);
    assert(q1.rear->data = -5);
   

    assert(-5 == dequeue(&q1));
    assert(10 == dequeue(&q1));
    assert(0 == dequeue(&q1));
    assert(5 == dequeue(&q1));
    return 0;
}