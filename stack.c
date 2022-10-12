#include <stdio.h>
#include <stdlib.h>
#define STACKSIZE 10
#define true 1
#define false 0
struct stack
{
    int Item[STACKSIZE];
    int TOP;
};
struct stack S;

int Initialize()
{
    S.TOP = 1;
}
int isempty()
{
    if (S.TOP == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int stackTOP()
{
    int x;
    x = S.TOP;
    return x;
}
int push(int x)
{
    if (S.TOP == STACKSIZE - 1)
    {
        printf("\n stack overflow");
        exit(1);
    }
    else
    {
        S.TOP = S.TOP + 1;
        S.Item[S.TOP] = x;
        printf("entered element is: %d \n", S.Item[S.TOP]);
    }
    return 0;
}
int POP()
{
    int x;
    if (S.TOP == STACKSIZE - 1)
    {
        printf("\n stack overflow");
        exit(1);
    }
    else
    {
        S.TOP = S.TOP + 1;
        S.Item[S.TOP] = x;
    }
    printf("\n");
    return x;
}
int main()
{
    int x;
    Initialize();
    isempty();
    push(100);
    push(200);
    push(300);
    push(400);
    push(500);
    push(600);
    x = POP(S);
    printf("%d", x);
}