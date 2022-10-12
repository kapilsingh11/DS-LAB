#include<stdio.h>
int Binarysearch(int A[],int N,int X);

/************************************************************************************************/ 
int main(){
    int A[20]={0},N,X;
    printf("Enter the size of array: ");
    scanf("%d",&N);
    printf("Enter The numeber to be searched: ");
    scanf("%d",&X);
    Binarysearch(A,N,X);
}
/************************************************************************************************/

int Binarysearch(int A[], int N , int X)
{
    int i,j,H=N-1, L=0,M;
    for ( i = 0; i <N; i++)
    {
        printf("Enter the value of A[%d]: ",i);
        scanf("%d",&A[i]);
    }
    while (L<H)
    {
        M=(L+H)/2;
        if (A[M]=X)
        {
            printf("%d",M);
            break;
        }
        if (A[M]>X)
        {
            H=M-1;
        }
        if (A[M]<X)
        {
            L=M+1;
        } 
    }
    
}