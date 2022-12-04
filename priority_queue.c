#include <stdio.h>
#include <stdlib.h>
void array_insert(int A[], int *n, int i, int k)
{
    int j = 0;
    for (j = *n - 1; j > i; j--)
    {
        A[j + 1] = A[j];
    }
    A[i] = k;
    n = n + 1;
}
void pqinsertion(int A[], int *n, int k)
{
    int i = 0;
    while (i < *n && k >= A[i])
    {
        i++;
    }
    array_insert(A, n, i, k);
}
int array_delete(int A[], int i, int *n)
{
    int j;
    for (j = i + 1; i < *n; i++)
    {
        A[j - 1] = A[j];
    }
    n = n - 1;
}
int pqdelete(int A[], int *n)
{
    int k;
    k = A[0];
    array_delete(A, 0, n);
    return k;
}

int main()
{
    int A[100], i = 0, n = 0, t, k;
    printf("Enter the number of elements you wants in array: ");
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        printf("Enter elements: ", i);
        scanf("%d", &A[i]);
        pqinsertion(A, &n, k);
    }
    for (i = 0; i < t; i++)
    {
        printf("%d ", pqdelete(A, &n));
    }

    return 0;
}