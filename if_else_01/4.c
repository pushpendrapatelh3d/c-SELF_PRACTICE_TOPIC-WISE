#include<stdio.h>
//maximum of two number investigator
int main(){
    int a,b;
    printf("Enter first number(a):");
    scanf("%d",&a);
    printf("Enter second number(b):");
    scanf("%d",&b);
    if(a>b)
    printf("a is greater than b");
    else{
        if(a<b)
        printf("b is graeter than a");
        else
        printf("both are equal");
    }
}