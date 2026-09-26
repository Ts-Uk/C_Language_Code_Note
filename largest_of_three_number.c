#include<stdio.h>
int main(){
    int a, b, c , temp = 0;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        temp = a;
    }
    if(a>c){
        temp=a;
    }
    if(b>a){
        temp=b;
    }
     if(b>c){
        temp=b;
    }
     if(c>a){
        temp=c;
    }
     if(c>b){
        temp=c;
    }
    printf("%d",temp);
}