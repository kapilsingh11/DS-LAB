#include<stdio.h>
int factorial(int n);
int main(){
    int fact,i,n;
    printf("enter any number: ");
    scanf("%d",&n);
    factorial(n);
    printf("factorial of given number is: %d",factorial(n));

}
int factorial(int n)
{
    if(n==1 && n==0){
        return 1;
    }
    if(n>1){
        return n*factorial(n-1);
    }
}