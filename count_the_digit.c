// #include<stdio.h>
// int main(){
// int n,count = 0;
// scanf("%d",&n);
// for(;n != 0;n = n / 10){

//     count++;
// }
// printf("%d",count);
// return 0;}
#include<stdio.h>
int main(){
    int n , count = 0;
    scanf("%d",&n);
    while (n != 0)
    {
        count++;
        n = n / 10;
    }
    
    printf("%d",count);
    return 0;
}