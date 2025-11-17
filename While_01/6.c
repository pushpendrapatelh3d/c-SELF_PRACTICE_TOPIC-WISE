#include<stdio.h>

int main(){
    int n;
    int min =9;
    printf("Enter a number:");
    scanf("%d",&n);
    int temp = n;
    while(temp!=0){
        if(temp%10<min){
            min = temp%10;
        }
        temp = temp /10;
    }
    printf("Smallest digit :%d",min);

}