#include<stdio.h>
#include<stdlib.h>
void CountEvenOddNode();
struct Node
{
    int Info;
    struct Node *Next;
};
struct Node *START;
struct Node *GetNode()
{
    struct Node *P;
    P=(struct Node *)malloc(sizeof(struct Node));
    return P;
}
void Traverse()
{
    struct Node *P;
    P=START;
    while(P!=NULL)
    {
        printf("%d ",P->Info);
        P=P->Next;
    }
}
void InsBeg(int X)
{
    struct Node *P;
    P=GetNode();
    P->Info=X;
    P->Next=START;
    START=P;
}
void InsEnd(int X)
{
    struct Node *P;
    struct Node *Q;
    P=GetNode();
    Q=START;
    while(Q->Next!=NULL)
    {
        Q=Q->Next;
    }
    Q->Next=P;
    P->Info=X;
    P->Next=NULL;
}
int main()
{
    START=NULL;
    InsBeg(30);
    InsBeg(20);
    InsBeg(10);
    InsEnd(40);
    Traverse();
    CountEvenOddNode();
    return 0;
}
void CountEvenOddNode()
{
    struct Node *P;
    int CE=0,CO=0;
    P=START;
    while(P!=NULL)
    {
        if(P->Info%2==0)
        {
            CE++;
        }
        else
        {
            CO++;
        }
        P=P->Next;
    }
    printf("\nNumber Of Nodes Containing Even Values Are ---> %d",CE);
    printf("\n");
    printf("Number Of Nodes Containing Odd Values Are ---> %d",CO);
}