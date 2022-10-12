#include<stdio.h>
int main(){
    int A[5][5],B;
    printf("base address:%u\n",&A[0]);
    printf("base address[2][3]=%u\n",&A[2][3]);
    B=((2-0)*(4-0+1))+(3-0);
    printf("address[2][3]=%u",A[0]+B);
    
}