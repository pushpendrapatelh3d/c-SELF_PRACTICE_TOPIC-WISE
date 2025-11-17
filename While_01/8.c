#include<stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int temp = n;
    int sum=0;
    while(temp!=0){
        int m=(temp%10);
        if(m%2==0)
        sum =sum+m;
        temp=temp/10;
    }
    printf("Sum of even digits in %d : %d",n,sum);
}