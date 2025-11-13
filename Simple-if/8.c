#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    if(n<100)
    printf("entered number is less than 100");
    if(!(n<100))
    printf("entered number is greater than 100");
    
}