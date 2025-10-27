#include<stdio.h>

int main(){
    int i=1;

    x:
    if(i==1){
        goto loop;
    }
    printf("123");
    printf("456");
    loop:
    printf("789");
    goto x;
}