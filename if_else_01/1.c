#include<stdio.h>
//to check if a number is positive or negative 
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n>0) 
    {
        printf("Positve");
    }
    else
    {
        if(n==0)
        printf("Zero");
        else
        printf("Negative");

    }
}
