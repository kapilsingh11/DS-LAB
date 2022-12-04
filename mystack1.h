#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define STACKSIZE 20
#define true 1
#define false 0
struct stack
{
    char item[STACKSIZE];
    int TOP;
};
struct stack S;
int initialize()
{
    S.TOP = -1;
}
int isempty()
{
    if (S.TOP == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void push(char x)
{
    if (S.TOP == STACKSIZE - 1)
    {
        printf("\n stack overflow ");
        exit(1);
    }
    else
    {
        S.TOP = S.TOP + 1;
        S.item[S.TOP] = x;
    }
}
char pop()
{
    int x;
    if (isempty())
    {
        printf("\n stack underflow");
        exit(1);
    }
    else
    {   x = S.item[S.TOP];
        S.TOP--;
    }
    return x;
}
char stackTOP(){
    char x;
    x=S.item[S.TOP];
    return x;
}