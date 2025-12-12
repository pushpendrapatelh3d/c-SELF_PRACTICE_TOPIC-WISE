#include<stdio.h>
//count of elements of array without using sizeof functions 
int main(){
    int a[5]={1,2,3,4,5};
    int size = sizeof(a)/sizeof(a[0]);
    printf("Elements in array :%d",size);  
}