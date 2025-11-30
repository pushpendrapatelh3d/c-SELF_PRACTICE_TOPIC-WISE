#include<stdio.h>

int main(){
    int n,m;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("Enter a number larger than previous number :");
    scanf("%d",&m);

    for(int i = n;i <= m;i++){
        int isprime = 0;
        for(int j =2;j<=i/2;j++){
            if(i%j==0){
                isprime = 1;
                break;
            }
            
        }
        if(isprime)
            printf("%d\n",i);
    }
}