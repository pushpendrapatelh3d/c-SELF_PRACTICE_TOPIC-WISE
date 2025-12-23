#include<stdio.h>
#include<string.h>

//"Think outside the box "--> "knihT edistuo eht xob"
//reverse words at their own position 
void revstr(char a[],int start,int e){
    char temp;
    for(int i=start;i<e;i++,e--){
        temp=a[i];
        a[i]=a[e];
        a[e]=temp;
    } 
    return;
}
int main(){
    char a[]= "Think outside the box";
    int start=0;
    for(int i=0;i<=strlen(a);i++){
        if(a[i]==' '||a[i]=='\0')
        {
        revstr(a,start,i-1);
        start=i+1;
        }
    }
    printf("%s",a);
}