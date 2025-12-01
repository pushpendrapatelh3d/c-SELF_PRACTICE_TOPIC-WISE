#include<stdio.h>

int main(){
    int n ;
    printf("Enter a number :");
    scanf("%d",&n);
    int a=(n>=0?1:0);
    if(a){
        if(n==0)
        printf("Zero");
        else
        printf("Positive");
    }
    else 
    printf("Negative");

}