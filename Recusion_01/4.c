#include<stdio.h>

int bin_to_dec(int n){
    if(n==0)
    return 0;
    return n%10+(2*bin_to_dec(n/10));
}

int main(){
    int n;
    printf("Enter a number in binary:");
    scanf("%d",&n);
    printf("Decimal form of %d :%d",n,bin_to_dec(n));

}