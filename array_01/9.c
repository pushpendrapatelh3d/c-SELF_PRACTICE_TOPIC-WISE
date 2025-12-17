#include<stdio.h>
//to find missing element from 1 to n in an array
int main(){
    int sum=0;
    int a[6]={1,2,4,5,6,7};
    int n=7;//length of array + 1(to be stored in "n")
    int nsum=n*(n+1)/2;
    for(int i=0;i<n-1;i++)
    sum+=a[i];
    int missing=nsum-sum;
    printf("Array : ");
    for(int i=0;i<n-1;i++)
    printf("%d ",a[i]);
    printf("\nMissing element :%d",missing);


    
}