#include<stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int sum = 0;
    int temp = n;
    while(temp !=0 ){
        sum = sum + (temp%10);
        temp = temp/10; 
    }
    printf("Sum of digits of %d : %d",n,sum);
}