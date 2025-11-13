#include<stdio.h>

int main(){
    int a,b;
    printf("enter two numbers :");
    scanf("%d%d",&a,&b);
    if(a==b)
    printf("both a and b are equal");
    if(!(a==b))
    printf("a and b are not equal");
}