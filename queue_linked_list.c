#include <stdio.h>
#include "linked_list.h"
void initialize(struct node **REAR, struct node **FRONT)
{
    (*REAR)=NULL;
    (*FRONT)=NULL;
}
void enqueue(struct node **REAR, struct node **FRONT, int X)
{
    InsAfter(REAR, X);
}
void dequeue()