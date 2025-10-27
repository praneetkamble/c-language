#include<stdio.h>

int main(){
    int j,add=0;
    printf("enter the no\n");
    scanf("%d",&j);

    for(int i=1;i<=j;i++){
printf("%d\n",i);
       add=add+i;
    }

    printf("the addition of all numbers is %d",add);
}