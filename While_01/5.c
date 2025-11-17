#include<stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int i;
    printf("Enter a digit to count :");
    scanf("%d",&i);
    int temp = n,count =0;
    while(temp != 0){
        if(i==temp%10)
        count++;
        temp=temp/10;
    }
    printf("count of %d(digit) in %d :%d",i,n,count);
}