#include<stdio.h>

int main(){
    int age;
    printf("Enter age :");
    scanf("%d",&age);
    if(age>=13&&age<=19)
    printf("teenager ");
    if(!(age>=13&&age<=19))
    printf("Not a teenager ");
}