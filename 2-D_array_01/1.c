#include<stdio.h>

int main(){
    char ch[5][4];
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            printf("Enter a character :");
            scanf("%c",&ch[i][j]);
            fflush(stdin);
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            if(ch[i][j]>=97&&ch[i][j]<=122){
                printf("%c\t",ch[i][j]-32);
            }
            else
            printf("%c\t",ch[i][j]);
        }
        printf("\n");
    }
}