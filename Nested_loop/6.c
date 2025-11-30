#include<stdio.h>

int main(){
    int n,m;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("Enter a number larger than previous number :");
    scanf("%d",&m);

    for(int i = n;i <= m-2;i++){
        int isprime = 0,isprime2=0;
        for(int j =2;j<=(i+2)/2;j++){
            if(i%j==0){
                isprime = 1;
                break;
            }
            if((i+2)%j==0){
                isprime2 = 1;
                break;
            }
            
        }
        if(isprime==0 && isprime2==0)
            printf("(%d,%d)\n",i,i+2);
    }
}