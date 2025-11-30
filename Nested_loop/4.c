#include<stdio.h>

int main(){
    int n,m;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("Enter a number larger than previous number :");
    scanf("%d",&m);

    for(int i=n;i<=m;i++){
        int sum =0;
        for(int j =1;j<=i/2;j++){
        if(i%j==0){
            sum+=j;
        }
        }
        if(sum==i)
        printf("%d\n",i);
    }
}