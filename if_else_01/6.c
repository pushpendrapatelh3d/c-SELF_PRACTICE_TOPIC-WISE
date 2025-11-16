#include<stdio.h>
//uppercase and lowercase verifier
int main(){
    char ch;
    printf("Enter a character :");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
    printf("Upper case");
    if(ch>=97&&ch<=122)
    printf("Lower case");
}