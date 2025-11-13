#include<stdio.h>

int main(){
    int n ;
    printf("enter a number :");
    scanf("%d",&n);
    if(n%2==0)
    {
        prntf("even");        
    }
    if(n%2 != 0)
    {
        printf("odd");
    }
}