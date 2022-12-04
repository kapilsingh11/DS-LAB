#include<stdio.h>
#include<stdlib.h>
int CountNode();
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
    printf("\nTotal Number Of Nodes Are --- > %d",CountNode());
}
int CountNode()
{
    struct Node *P;
    int C=0;
    P=START;
    while(P!=NULL)
    {
        C++;
        P=P->Next;
    }
    return C;
}