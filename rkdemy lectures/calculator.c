#include<stdio.h>

int main(){

    int x,y;
    int ch;

    printf("enter two numbers\n");
    scanf("%d%d",&x,&y);

    printf("\n\nenter the operation code\n1.addition\n2.subtraction\n3.division\n4.multiplication\n5.modulus\n\n ");
    scanf(" %d",&ch);

    switch(ch){
        case 1:
        printf("%d + %d = %d",x,y,(x+y));
        break;
        case 2:
        printf("%d - %d = %d",x,y,(x-y));
        break;
        case 3:
        printf("%d / %d = %2f",x,y,((float)x/(float)y)); // typecasting to get float result
        break;
        case 4:
        printf("%d * %d = %d",x,y,(x*y));
        break;
        case 5:
        printf("%d %% %d = %d",x,y,(x%y));
        break;
        default:
            printf("invalid operation code");
        }
    
}