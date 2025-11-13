#include<stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if(n%10==0)
    printf("%d is a multiple of 10",n);
    if(!(n%10==0))
    printf("%d is not a multiple of 10",n);
}