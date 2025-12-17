#include<stdio.h>
#define Fix 5//size of array
//program for insertion of element in an array
int insert(int a[],int index,int val,int *size){
    if(*size >=Fix){
        printf("Array Overflow \n");
        return 0;
    }
    for(int i=*size;i>=index;i--){
        a[i+1]=a[i];
    }
    a[index]=val;
    printf("Added element :%d\n",val);
    return ++*size;
}

int main(){
    int a[Fix];
    int n=0;
    int *size =&n;
    insert(a,0,10,size);
    insert(a,1,20,size);
    insert(a,2,30,size);
    insert(a,3,40,size);
    insert(a,4,50,size);
    insert(a,2,60,size);
    for(int i=0;i<Fix;i++)
    printf("%d ",a[i]);



}