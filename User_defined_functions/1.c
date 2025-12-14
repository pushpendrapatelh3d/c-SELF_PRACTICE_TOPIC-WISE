#include<stdio.h>

int add(int a,int b){
    return a+b;
}

int main(){
    int a,b;
    printf("Enter a number :");
    scanf("%d",&a);
    printf("Enter a number :");
    scanf("%d",&b);
    printf("addition of %d and %d :%d",a,b,add(a,b));
}