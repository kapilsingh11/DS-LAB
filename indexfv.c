#include<stdio.h>
int main(){
    int A[10],B;
    printf("base address:%u\n"),&A[10];
    printf("base address[5]=%u",&A[5]);
    B=(5-0);
    printf("address[5]=%u",A+B);
    
}