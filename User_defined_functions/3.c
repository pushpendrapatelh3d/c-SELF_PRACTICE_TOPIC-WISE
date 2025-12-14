#include<stdio.h>

int factorial(int n){
    if(n==0||n==1)
        return 1;
    int fact=1;
    while(n!=1){
        fact*=n;
        n--;
    }
    return fact;
}


int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("Factorial of %d : %d ",n,factorial(n));
}