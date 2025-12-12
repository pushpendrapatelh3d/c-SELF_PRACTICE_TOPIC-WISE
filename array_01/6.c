#include<stdio.h>
//sum of even and odd elements of array
int main(){
    int esum=0,osum=0;
    int a[10]={12,23,45,54,55,66,65,2,3,1};
    for(int i=0;i<10;i++)
    {
        if(a[i]%2==0)
        esum+=a[i];
        else
        osum+=a[i];
    }
    printf("Sum of odd elements :%d\n",osum);
    printf("Sum of even elements :%d",esum);
}