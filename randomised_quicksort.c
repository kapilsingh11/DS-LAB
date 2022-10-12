#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*******************************************************************/
int Random(int L, int H);
void Quicksort(int A[], int L, int H);
int Partition(int A[], int L, int H);

/******************************************************************/
int main()
{
    int A[50] = {0}, N, L = 0, i;
    printf("enter the size of array: ");
    scanf("%d", &N);
    A[N] = INT_MAX;
    for (i = 0; i < N; i++)
    {
        printf("enter the value of A[%d]: ", i);
        scanf("%d", &A[i]);
    }
    Quicksort(A, L, N - 1);
    for (i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}
/********************************************************************/

void Quicksort(int A[], int L, int H)
{
    int j;
    if (L < H)
    {
        j = Partition(A, L, H);
        Quicksort(A, L, j - 1);
        Quicksort(A, j + 1, H);
    }
}
/*******************************************************************/

int Partition(int A[], int L, int H)
{
    int i = L, j = H + 1, T, N;
    N = Random(L, H);
    T = A[L];
    A[L] = A[N];
    A[N] = A[T];
    int P = A[L];
    do
    {
        do
        {
            i = i + 1;
        } while (A[i] < P);
        do
        {
            j = j - 1;
        } while (A[j] > P);
        if (i < j)
        {
            T = A[i];
            A[i] = A[j];
            A[j] = T;
        }

    } while (i < j);
    T = A[j];
    A[j] = A[L];
    A[L] = T;
    return j;
}

/*************************************************************/

int Random(int L, int H)
{
    srand(time(NULL));
    int N;
    N = (rand() % (H - L + 1)) + L;
    return N;
}