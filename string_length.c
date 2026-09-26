#include<stdio.h>
#include<string.h>
int main(){
    char word[999];
    scanf("%999[^\n]",word);
    printf("%s\n",word);
    printf("%zu",strlen(word));

    return 0;
}