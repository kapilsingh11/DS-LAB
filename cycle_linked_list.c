#include <stdio.h>
#include <stdlib.h>
#define true 1;
#define false 0;
struct node
{
    int info;
    struct node *next;
};
struct node *START;
struct node *GETNODE()
{
    struct node *P;
    P = (struct node *)malloc(sizeof(struct node));
    return P;
}
void INSBEG(int X)
{
    struct node *P;
    P = GETNODE();
    P->info = X;
    P->next = START;
    START = P;
}
void traverse()
{
    struct node *P;
    P = START;
    while (P != NULL)
    {
        printf("%d ", P->info);
        P = P->next;
    }
}
void INSEND(int X)
{
    struct node *Q;
    struct node *P;

    Q = START;
    while (Q->next != NULL)
    {
        Q = Q->next;
    }
    P = GETNODE();
    P->info = X;
    P->next = NULL;
    Q->next = P;
}
int cycle_detection()
{
    struct node *T;
    struct node *R;
    while (R != NULL && R->next != NULL)
    {
        T = T->next;
        R = R->next;
        R = R->next;

        if (T == R)
        {
            return true;
            break;
        }
    }
    if (T == R)
    {
    }
    else
    {
        return false;
    }
}
void cycle_count()
{
    struct node *T;
    struct node *R;
    T = START;
    R = START;
    while (R != NULL && R->next != NULL)
    {
        T = T->next;
        R = R->next;
        if (T == R)
        {
            break;
        }
        int C = 0;
        do
        {
            C++;
            T=T->next;
        } while (T!=R);
        return C;
    }
}

int main()
{
    struct node *P;
    struct node *Q;

    START = NULL;
    INSBEG(10);
    INSBEG(20);
    INSBEG(30);
    INSBEG(40);
    INSBEG(50);
    INSBEG(60);
    INSEND(100);
    INSEND(200);
    INSEND(300);
    P = START;
    Q = START;
    while (P->next != NULL)
    {
        P = P->next;
    }
    while (Q->info != 60)
    {
        Q = Q->next;
    }
    P->next = Q;

    if (cycle_detection())
    {
        printf("cycle");
    }
    else
    {
        printf("not cycle");
    }
}