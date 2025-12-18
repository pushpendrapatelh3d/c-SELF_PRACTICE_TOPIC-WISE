#include<stdio.h>
//{1,2,3,4,5}-->{2,3,4,5,1}
int main(){
    int a[5]={1,2,3,4,5};
    printf("\nArray before rotation  : ");
    for(int i=0;i<5;i++)
    printf("%d ",a[i]);
    int temp =a[0];
    int j=0;
    while(j<=3)//(condition --> j<=n-2)
    {
        a[j]=a[j+1];
        j++;
    }
    a[j]=temp;
    printf("\nArray after rotation  : ");
    for(int i=0;i<5;i++)
    printf("%d ",a[i]);

}