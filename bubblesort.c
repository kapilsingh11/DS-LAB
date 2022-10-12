#include<stdio.h>
int Bubblesort(int A[],int N);

/************************************************************************************************/ 
int main(){
    int A[20]={0},N;
    printf("Enter the size of array: ");
    scanf("%d",&N);
    
   Bubblesort(A,N);
}
/************************************************************************************************/

int Bubblesort(int A[], int N)
{
    int i,j,S;
    for ( i = 0; i <N; i++)
    {
        printf("Enter the value of A[%d]: ",i);
        scanf("%d",&A[i]);
    }
    for ( i = 0; i < N-1; i++)
    {
        for ( j = 0; j < N-i-1; j++)
        {
            if (A[j]>A[j+1])
            {
                S=A[j+1];
                A[j+1]=A[j];
                A[j]=S;
            }
            
        }
        
    }
    
    for ( i = 0; i < N; i++)
    {
        printf("%d \t",A[i]);
    }
    return 0;
    
    
}