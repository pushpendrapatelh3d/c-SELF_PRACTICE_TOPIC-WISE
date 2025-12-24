#include<stdio.h>

int main(){
    int a[3][3];
    int b[3][3];
    printf("Enter elements of first array :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter a number :");
            scanf("%d",&a[i][j]);
            fflush;
        }
    }
    printf("Enter elements of second array :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter a number :");
            scanf("%d",&b[i][j]);
            fflush;
        }
    }
    printf("Result of addition of both array :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",a[i][j]+b[i][j]); 
        }
        printf("\n");
    }
    
}