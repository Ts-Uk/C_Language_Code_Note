#include <stdio.h>
int main (){
   int n,x,even = 0, odd = 0;
   scanf("%d",&n);
   for (int i = 0; i < n;i++){
    scanf("%d",&x);
    if (x % 2 == 0){
        even++;
    }
    else {
        odd++;
    }
   }
printf("%d\n",even);
printf("%d\n",odd);
return 0;
}