#include<stdio.h>

int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    if(n>=100&&n<=999) 
    printf("%d is a three digit number .",n);
    if(!(n>=100&&n<=999))
    printf("%d is not a three digit number .",n);

}