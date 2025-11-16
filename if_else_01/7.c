#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("%d is greatest .",a);
        }
        else if(c>a){
            printf("%d is greatest",c);
        }
        else{
            printf("%d and %d are equal and greatest",c,a);
        }
    }
    else{
            if(b>a){
                if(b>c){
                    printf("%d is greatest",b);
                }
                else if(c>b){
                    printf("%d is greatest",c);
                }
                else{
                    printf("%d and %d are equal and greatest",b,c);
                }
            }
            else{
                if(b>c){
                    printf("%d and %d are equal and greatest",a,b);
                }
                else
                if(c>b){
                    printf("%d is greatest",c);
                }
                else{
                    printf("%d,%d and %d all are equal",a,b,c);
                }
            }
            
        }
    }
