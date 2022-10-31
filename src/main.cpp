extern "C"{
    // Add the header files required to run your main 
    #include "list_queue.h"
    #include "stdio.h"
}

// File for sandboxing and trying out code
int main(int argc, char **argv)
{
    queue q;

    //test that the initial queue is empty.
    init_queue(&q);
    assert(q.size == 0);
    assert(q.front == NULL && q.rear == NULL);

    //Test that queuing and dequeuing works
    int x_0 = 5;
    enqueue(&q, x_0);

    assert(q.front->data == x_0);
    assert(q.rear->data == x_0);
    
    int y_0 = dequeue(&q);
    assert(q.size == 0);
    assert(x_0 == y_0);

    //Test that queuing and dequeuing multiple elements work as expected.

    int x_1 = 10;
    enqueue(&q, x_0);
    enqueue(&q, x_1);
    
    assert(q.front->data == x_0);
    assert(q.rear->data == x_1);
    
    y_0 = dequeue(&q);
    int y_1 = dequeue(&q);
    assert(x_0 == y_0);
    assert(x_1 == y_1);

    printf("All tests passed!\n");
    return 0;
}