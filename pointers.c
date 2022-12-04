#include <stdio.h>
void traverse(int *p, int n);
int main()
{
    int i;
    int *p;
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    traverse(A, 10);
}
void traverse(int *p, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\n%d", *(p + i));
    }
}