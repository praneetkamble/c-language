#include<stdio.h>
int op(int,int);

int main(){
    int x,y;
    printf("enter two numbers\n");
    scanf("%d%d",&x,&y);
    int z=op(x,y);
    printf("%d is greater\n",z);
}

int op(int x,int y){
    printf("add = %d\nsub = %d\nmul = %d\ndiv = %.2f\n mod = %d\n",x+y,x-y,x*y,(float)x/y,x%y);
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}