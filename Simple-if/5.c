#include<stdio.h>

int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    if(n%5==0){
        printf("multiple of 5 ");
    }
    if(!(n%5==0)){
        printf("not a multiple of 5");
    }
}