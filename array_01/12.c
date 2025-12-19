#include<stdio.h>
/*{1,2,3,4,5}-->{2,3,4,5,1} such rotations can 
be performed m times using following program*/ 
int main(){
    int a[5]={1,2,3,4,5};
    printf("Enter number of rotations :");
    int m;
    scanf("%d",&m);
    printf("\nArray before rotation  : ");
    for(int i=0;i<5;i++)
    printf("%d ",a[i]);

    for(int i=0;i<m;i++){
    int temp =a[0];
    int j=0;
    while(j<=3)//(condition --> j<=n-2)
    {
        a[j]=a[j+1];
        j++;
    }
    a[j]=temp;
    }
    printf("\nArray after %d rotations  : ",m);
    for(int i=0;i<5;i++)
    printf("%d ",a[i]);


}