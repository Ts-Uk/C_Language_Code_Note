#include<stdio.h>
int main(){
long long n,reverse = 0,last;
scanf("%lld",&n);
for(;n!=0;n=n/10){
        last = n % 10;
    reverse = reverse * 10 + last;
}
printf("%lld",reverse);

return 0;}
