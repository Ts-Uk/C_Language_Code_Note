// #include<stdio.h>
// int main(){
//     long long n,x,sum = 0;
//     scanf("%lld",&n);
//     for(int i = 0;i<n;i++){
//         scanf("%lld",&x);
//         sum +=x;
//     }
//     printf("%lld",sum);
//     return 0;
// }
#include<stdio.h>
    int main(){
    long long i=0,n,x,sum = 0;
    scanf("%lld",&n);
    while (i<n)
    {
        scanf("%lld",&x);
        sum +=x;
        i++;

    }
    
    printf("%lld",sum);
    return 0;
}