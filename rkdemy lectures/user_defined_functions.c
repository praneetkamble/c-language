#include<stdio.h>
void add();
void sub();
void mul();

int main(){
    int x=55,y=25;
    //add();
    //sub();
    //mul();
    return 0;
}


void add(){
    int x,y;
    printf("enter 2 numbers\n");
    scanf("%d%d",&x,&y);
    sub();
    printf("addition of numbers is equal to %d\n",x+y);
}


void sub(){
    int x,y;
    printf("enter 2 numbers\n");
    scanf("%d%d",&x,&y);
    printf("subtraction of numbers is equal to %d\n",x-y);
}


void mul(){
    int x,y;
    printf("enter 2 numbers\n");
    scanf("%d%d",&x,&y);
    printf("multiplication of numbers is equal to %d\n",x*y);
}


