#include<stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int temp = n,count =0;
    while(temp != 0){
        if((temp%10)==0)
        count++;
        temp=temp/10;
    }
    printf("count of 0 in %d :%d",n,count);
}