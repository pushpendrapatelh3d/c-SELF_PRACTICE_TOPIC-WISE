#include<stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int temp = n;
    int l=-1,sl=-1;
    while(temp !=0){
        int digit = temp%10;
        if(digit>l)
        {
            sl = l;
            l=digit;
        }
        else if(digit>sl&&digit !=l)
        {
            sl = digit;
        }
        temp = temp/10;
    }
    if(sl==-1)
    printf("All digits similar");
    else
    printf("Second last digit : %d",sl);
}