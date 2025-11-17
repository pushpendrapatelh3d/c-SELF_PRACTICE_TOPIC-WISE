#include<stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int counte=0,counto=0;
    int temp = n;
    while(temp!=0){
        int m=(temp%10);
        if(m%2==0){
        counte++;
    }
        else{
        counto++;
    }
    temp = temp/10;
    }
    printf("Even : %d",counte);
    printf("\nOdd : %d",counto);
}