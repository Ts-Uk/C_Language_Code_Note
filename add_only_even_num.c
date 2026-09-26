#include <stdio.h>
int main (){
int n,x;
long long sum = 0;
scanf("%d",&n);
for (int i=1;i<=n;i++){
    scanf("%d",&x);
    if(i % 2 == 0){
        sum+=x;
    }

}
printf("%lld",sum);

return 0;}
