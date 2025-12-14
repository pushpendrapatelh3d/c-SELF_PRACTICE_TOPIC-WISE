#include<stdio.h>
int max_of_three(int a,int b,int c){
    if(a>b){
        if(a>c){
            return a;
        }
        else{
           return c;
        }
    }
    else{
            if(b>a){
                if(b>c){
                    return b;
                }
                else {
                    return c;
                }
            }
            else{
                if(b>c){
                    return a;
                }
                else
                {
                    return c;
                }
            }
            
        }
}

int main(){
    int a,b,c;
    printf("Enter a number :");
    scanf("%d",&a);
    printf("Enter a number :");
    scanf("%d",&b);
    printf("Enter a number :");
    scanf("%d",&c);
    printf("Greatest among %d,%d and %d : %d",a,b,c,max_of_three(a,b,c));
}