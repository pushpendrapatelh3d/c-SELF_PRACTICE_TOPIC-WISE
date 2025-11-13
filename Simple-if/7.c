#include<stdio.h>

int main(){
    char ch;
    printf("enter a character :");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
    printf("entered character is an uppercase .");
    if(!(ch>=65&&ch<=90))
    printf("Entered character is not an uppercase .");
}