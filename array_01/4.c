#include<stdio.h>
//input of array elements without [] , & 
int main(){
    int a[5];

    for(int i=0;i<5;i++){
        printf("Enter a number :");
        scanf("%d",a+i);
    }
    for(int i=0;i<5;i++)
    printf("a[%d]=%d\n",i,*(a+i));
    
    
}