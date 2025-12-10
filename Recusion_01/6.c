#include<stdio.h>

int calc(int n,int m){
    if(m==0)
    return 1;
    return n*calc(n,m-1);
}


int main(){
    int n,m;
    printf("Enter two numbers :");
    scanf("%d%d",&n,&m);
    printf("%d to the power %d :%d",n,m,calc(n,m));

}