#include<stdio.h>

int main(){
    char ch ;
    printf("enterf  a character :");
    scanf("%c",&ch);
    if(ch=='a'||ch=='A')
    printf("Vowel\n");
    if(ch=='e'||ch=='E')
    printf("Vowel\n");
    if(ch=='i'||ch=='I')
    printf("Vowel\n");
    if(ch=='o'||ch=='O')
    printf("Vowel\n");
    if(ch=='u'||ch=='U')
    printf("Vowel\n");

    if(!(ch=='a'||ch=='A'||
         ch=='e'||ch=='E'||
         ch=='i'||ch=='I'||
         ch=='o'||ch=='O'||
         ch=='u'||ch=='U'))
         printf("Not a vowel .\n");

    

}