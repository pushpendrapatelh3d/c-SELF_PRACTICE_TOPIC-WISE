#include<stdio.h>


void greet(char name[]){
    printf("Hello %s !Welcome to the program .",name);
}

int main(){
    char name[50];
    printf("Enter your name :");
    gets(name);
    greet(name);

}