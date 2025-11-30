#include<stdio.h>

int main(){
   int n;
   printf("Enter a number :");
   scanf("%d",&n);
   int count =0;
   for(int i=1;i<=n;i++){
    int sum=0;
    int temp =i;
    while(temp!=0){
        int fact =1;
        for(int j =temp%10;j>=2;j--){
            fact = fact *j;
        }
        sum =fact+sum;
        temp =temp/10;
    }
    if(sum==i)
    {
        printf("%d\n",i);
        count++;
    }

   }
}