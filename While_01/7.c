#include<stdio.h>

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int temp = n;
    while(temp > 10){
        temp= temp/10; 
    }  
    printf("First digit : %d",temp);
}