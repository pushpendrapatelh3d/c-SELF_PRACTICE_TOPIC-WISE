#include<stdio.h>

int even_odd(int n){
    if(n/2*2==n)
    return 1;
    else
    return 0;
}

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if(even_odd(n))
    printf("Even");
    else 
    printf("Odd");

}