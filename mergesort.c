#include <stdio.h>
int mergesort(int A[], int s, int e){
    int m;
    if (s<e)
    {
        m=(s+e)/2;
        mergesort(A,s,m);
        mergesort(A,s,m+1);
        Merge(A,s,m,e); 
    }
    
}
int Merge(int A[], int s, int m, int e)
{
    int i = s, j = m + 1, k = e;
    int C[100];
    while (i <= m && j <= e)
    {
        if (A[i] < A[j])
        {
            C[k] = A[i];
            i++;
            k++;
        }
        else
        {
            C[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= m)
    {
        C[k] = A[i];
        i++;
        k++;
    }
    while (j <= e)
    {
        C[k] = A[j];
        j++;
        k++;
    }
    for (i = s; i <= e; i++)
    {
        A[i] = C[i];
    }
}
int main(){
    int n,l=0;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int A[n];
    for ( int i = 0; i <n; i++)
    {
        printf("enter the values[i]: ");
        scanf("%d",&A[i]);
    }
    mergesort(A,l,n-1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    
}