#include<stdio.h>
/*
0 2 0 2 0
2 0 2 0 2
0 2 0 2 0
2 0 2 0 2
0 2 0 2 0
*/
int main(){

    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if((i+j)%2==0)
            printf("0 ");
            else
            printf("2 ");
        }
        printf("\n");
    }

}