#include<stdio.h>
int main(){
    int n;
    printf("Enter how many numbers you want to add");
    scanf("%d",&n);
    int arra[n];
    for(int i = 0; i < n;i++){
        scanf("%d",&arra[i]);
    }
    for(int i = 0; i <n;i++){
        printf("%d\n",arra[i]);
    }
    int min = arra[0], max = arra[0];
    for(int i = 1; i < n ; i ++){
        if (arra[i]<min){
            min = arra[i];
        }
        if (arra[i]>max){
             max = arra[i] ;
        }
    }
    printf("%d\n",min);
    printf("%d\n",max);
    return 0;
}