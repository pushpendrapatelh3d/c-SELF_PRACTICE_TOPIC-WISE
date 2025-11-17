#include<stdio.h>

int main(){
    int n;
    int max =0;
    printf("Enter a number:");
    scanf("%d",&n);
    int temp = n;
    while(temp!=0){
        if(temp%10>max){
            max = temp%10;
        }
        temp = temp /10;
    }
    printf("Largest digit :%d",max);

}