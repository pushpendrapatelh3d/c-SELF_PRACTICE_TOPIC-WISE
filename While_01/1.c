#include<stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int rev=0;
    int temp = n;
    while(temp != 0){
        rev =(rev*10)+(temp%10);
        temp = temp /10;
    } 
    printf("reverse of %d : %d",n,rev);
}