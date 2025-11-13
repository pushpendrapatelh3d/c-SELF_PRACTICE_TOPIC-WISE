#include<stdio.h>

int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    if(n<=50&&n>=1)
    printf("%d lies in the range 0f '1-50'",n);
    if(!(n<=50&&n>=1))
    printf("%d does not lies in the range 0f '1-50'",n);
    
}