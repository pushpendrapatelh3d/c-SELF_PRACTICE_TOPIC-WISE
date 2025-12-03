#include<stdio.h>
//uppercase and lowercase verifier
int main(){
    char ch;
    printf("Enter a character :");
    scanf("%c",&ch);
    (ch>64&&ch<91)?printf("%c  is an upper case letter .",ch)
    :(ch>96&&ch<123)?printf("%c is a lower case letter .",ch)
    :printf("%c is not an alphabetic characcter .",ch);
    
}