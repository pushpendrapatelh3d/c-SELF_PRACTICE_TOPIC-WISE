#include<stdio.h>

int main(){
    int age;
    printf("Enter age :");
    scanf("%d",&age);
    if(age<0)
    printf("Invalid input");
    else if(age<18)
    printf("Minor");
    else if(age>=18&&age<=59)
    printf("Adult");
    else if(age>=60)
    printf("Senior citizen");
    
}