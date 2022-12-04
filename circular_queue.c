#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0
#define STACKSIZE 10
struct queue
{
    char item[STACKSIZE];
    int front;
    int rear;
};
void initialize(struct queue *Q)
{
    Q->front = STACKSIZE;
    Q->rear = STACKSIZE;
}
int isempty(struct queue *Q)
{
    if (Q->rear == Q->front)
    {
        return true;
    }
    else
    {
        return false;
    }
}
char dequeue(struct queue *Q)
{
    int x;
    if (isempty(Q) == true)
    {
        printf("\nunderflow");
        exit(1);
    }
    else
    {
        Q->front = (Q->front + 1) % STACKSIZE;
        x = Q->item[Q->front];
    }
    return x;
}
int enqueue(struct queue *Q, int x)
{
    if (((Q->rear + 1) % STACKSIZE) == Q->front)
    {
        printf("\noverflow");
        exit(1);
    }
    else
    {
        Q->rear = (Q->rear + 1) % STACKSIZE;
        Q->item[Q->rear] = x;
    }
}
int main()
{
    char y;
    struct queue myQ;
    initialize(&myQ);
    enqueue(&myQ, 'A');
    enqueue(&myQ, 'B');
    enqueue(&myQ, 'C');
    enqueue(&myQ, 'D');
    enqueue(&myQ, 'E');
    enqueue(&myQ, 'F');
    enqueue(&myQ, 'G');
    enqueue(&myQ, 'H');
    enqueue(&myQ, 'I');
    enqueue(&myQ, 'J');

    y = dequeue(&myQ);
    printf("deleted element is %c", y);
    y = dequeue(&myQ);
    printf("\ndeleted element is %c", y);
    y = dequeue(&myQ);
    printf("\ndeleted element is %c", y);
    y = dequeue(&myQ);
    printf("\ndeleted element is %c", y);
    y = dequeue(&myQ);
    printf("\ndeleted element is %c", y);
    y = dequeue(&myQ);
    printf("\ndeleted element is %c", y);
    y = dequeue(&myQ);
    printf("\ndeleted element is %c", y);
    y = dequeue(&myQ);
    printf("\ndeleted element is %c", y);
    y = dequeue(&myQ);
    printf("\ndeleted element is %c", y);
    y = dequeue(&myQ);
    printf("\ndeleted element is %c", y);
    return 0;
}
