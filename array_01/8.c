#include<limits.h>
#include<stdio.h>
//to find second largest element of array
int main(){
    int a[10], freq[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter value:");
        scanf("%d", a + i);
    }
    printf("Array :");
    for(int i=0;i<10;i++)
    printf("%d ",a[i]);
    printf("\n");

    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<10;i++){
        if(max<a[i])
        {
            smax=max;
            max=a[i];
        }
        else if(a[i]>smax&&max!=a[i]){
            smax=a[i];
        }
    }
    if(smax==INT_MIN)
    printf("No second largest element exist ");
    else
    printf("Second largest element present in the array : %d",smax);
}