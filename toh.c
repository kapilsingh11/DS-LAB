#include<stdio.h>
void TOH(int N, char S, char M, char D)
{
    if (N==1)
    {
        printf("%c----->%c\n",S,D);
    }else{
        TOH(N-1,S,D,M);
        printf("%c----->%c\n",S,D);
        TOH(N-1,M,S,D);
    }
    
}
int main()
{int n;
    printf("enter value: ");
    scanf("%d",&n);
    TOH(n,'S','M','D');
}