#include<stdio.h>
//voting eligibility checker
int main(){
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    if(age<0)
    printf("Invalid input");
    else{
        if(age>=18)
        printf("Eligible for voting");
        else
        printf("Not eligible for voting");
    }
}
