#include<stdio.h>

int dec_to_bin(int n){
    if(n==0)
    return 0;
    return n%2+(10*dec_to_bin(n/2));
}

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("Binary form of %d :%d",n,dec_to_bin(n));

}