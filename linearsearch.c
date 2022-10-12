#include<stdio.h>
int Linearsearch(int A[],int N,int X);

/************************************************************************************************/ 
int main(){
    int A[20]={0},N,X;
    printf("Enter the size of array: ");
    scanf("%d",&N);
    printf("Enter The numeber to be searched: ");
    scanf("%d",&X);
    Linearsearch(A,N,X);
}
/************************************************************************************************/

int Linearsearch(int A[], int N , int X)
{
    int i,j,H=N-1, L=0,M;
    for ( i = 0; i <N; i++)
    {
        printf("Enter the value of A[%d]: ",i);
        scanf("%d",&A[i]);
    }
    for ( i = 0; i <N; i++)
    {
        if (X==A[i])
        {
           printf("%d",i);
        }  
    }
}