#include <stdio.h>
int main()
{
    int A[20];
    int i, j, k, n;
    printf("enter the size of array: ");
    scanf("%d", &n);
    for (size_t i = 0; i < n; i++)
    {
        printf("enter elements of array[i]: ");
        scanf("%d", &A[i]);
    }
    for (i = 1; i <= n - 1; i++)
    {
        k = A[i];
        j = i - 1;
        while (A[j] > k)
        {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = k;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", A[i]);
    }
}