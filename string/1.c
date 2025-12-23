#include<stdio.h>
#include<string.h>
//Program to reverse a string
int main(){
    char a[]= "Think outside the box";
    char temp;
    for(int i=0;i<strlen(a)/2;i++){
        temp=a[i];
        a[i]=a[strlen(a)-1-i];
        a[strlen(a)-1-i]=temp;
    } 
    printf("%s",a);
}