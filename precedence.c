#include <stdio.h>
#define true 1
#define false 0
int precedence(char A, char B)
{
    if (A == '^' || A == '/' || A == '%')
    {
        if (B == '^')
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    else
    {
        if (B == '+' || B == '-')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    printf("%d", precedence('+','-'));
    printf("\n%d", precedence('+','^'));
}