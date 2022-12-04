#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *GETNODE()
{
    struct node *P;
    P = (struct node *)malloc(sizeof(struct node));
    return P;
}
void INSAFTER(struct node **P, int x)
{
    struct node *Q;
    Q = GETNODE();
    Q->info = x;
    Q->next = (*P)->next;
    (*P)->next = Q;
}
void INSBEG(struct node **CSTART, int X)
{
    struct node *P;
    P = GETNODE();
    P->info = X;
    if ((*CSTART) == NULL)
    {
        (*CSTART) = P;
        P->next = P;
    }
    else
    {

        P->next = (*CSTART)->next;
        (*CSTART)->next = P;
    }
}

void INSEND(struct node **CSTART, int X)
{

    struct node *P;
    P = GETNODE();
    P->info = X;
    if ((*CSTART) != NULL)
    {
        P->next = (*CSTART)->next;
        (*CSTART)->next = P;
        *CSTART = P;
    }
    else
    {
        *CSTART = P;
        (*CSTART)->next = P;
    }
}
int DELBEG(struct node **CSTART)
{
    struct node *P;
    int X;
    P = (*CSTART)->next;
    (*CSTART)->next = P->next;
    if ((*CSTART)->next == CSTART)
    {
        CSTART = NULL;
    }
    X = P->info;
    free(P);
    return X;
}
int DELEND(struct node **CSTART)
{
    struct node *P, *Q;
    int X;
    Q = *CSTART;
    P = (*CSTART)->next;
    while (P->next != (*CSTART))
    {
        P = P->next;
    }
    P->next = (*CSTART)->next;
    CSTART = P;
    X = Q->info;
    free(Q);
    return X;
}
int DELAFTER(struct node **Q)
{
    struct node *P;
    int X;
    P = (*Q)->next;
    (*Q)->next = P->next;
    X = P->info;
    free(P);
    return X;
}
void orderins(struct node **CSTART, int x)
{
    struct node *P, *Q;
    P = (*CSTART);
    Q = NULL;
    while (P != NULL && x >= P->info)
    {
        Q = P;
        P = P->next;
    }
    if (Q == NULL)
    {
        INSBEG(CSTART, x);
    }
    else
    {
        INSAFTER(&Q, x);
    }
}
void traverse(struct node **CSTART)
{
    struct node *P;
    P = (*CSTART)->next;
    while (P != *CSTART)
    {
        printf("%d ", P->info);
        P = P->next;
    }
    printf("%d ", P->info);
}
int main()
{
    struct node *CSTART;
    CSTART = NULL;
    INSBEG(&CSTART, 10);
    INSBEG(&CSTART, 20);
    INSEND(&CSTART, 10);
    INSAFTER(&CSTART, 10);
    DELBEG(&CSTART);
    DELEND(&CSTART);
    DELAFTER(&CSTART);

    traverse(&CSTART);
}
