#include <stdio.h>
int fib(int N,int DAT[],int i)
{
    if (i == 0)
    {
        DAT[0] = 0;
    }
    else if (i == 1)
    {
        DAT[1] = 1;
    }
    else if (DAT[i] == 0)
    {
        DAT[i] = fib(N,DAT,i-1) + fib(N,DAT,i-2);
    }
    return DAT[i];
}

int main()
{
    int n;
    printf("Enter The Number: ");
    scanf("%d", &n);
    int DAT[n];
    for (int i = 0; i < n; i++)
    {
        DAT[i] = 0;
    }
    for(int i=0;i<n;i++)
    {
        //fib(n,DAT,i);
        printf("%d ",fib(n,DAT,i));
    }
    
}
