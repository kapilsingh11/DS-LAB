#include<stdio.h>
int main()
{
    int i,j,n,count=0;
    printf("enter any number: ");
    scanf("%d",&n);
    for ( i = 1; i<= n; i++)
    {
        for ( j = n; j >=1 ; j--)
        {
            if (j%i==0)
            {
                count=count+1;
            }
            
        }
        if(count==2)
        printf("%d",j);
    }
    
}