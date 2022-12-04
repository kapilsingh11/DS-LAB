#include <stdio.h>
#include <stdlib.h>
int input(int *p, int n);
int output(int *p, int n);
int main()
{
    int *p, i, n;
    scanf("%d", &n);
    p = (int *)malloc(sizeof(int) * n);
    input(p, n);
    output(p, n);
}
int input(int *p, int n)
{

    int i;
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d", (p + i));
    }
}
int output(int *p, int n)
{

    int i;

    for (i = 0; i <= n - 1; i++)
    {
        printf("\n%d", *(p + i));
    }
}