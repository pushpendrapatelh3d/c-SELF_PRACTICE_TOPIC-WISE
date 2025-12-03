#include<stdio.h>
//voting eligibility checker
int main(){
    int age;
    printf("Enter age :");
    scanf("%d",&age);
    age<18?printf("Not eligible for voting ."):printf("Eligibe for voting .");
}