#include<stdio.h>

int main(){
    int i=1,n;

    printf("enter the no of times name should be repeated\n");
    scanf("%d",&n);

    while(i<=n){
        printf("%d.praneet\n",i);
        i++;
    }
    return 0;
}