#include<stdio.h>

int main()
{
    int n1,n2,mul;

    printf("enter number 1:");
    scanf("%d",&n1);

    printf("enter number 2:");
    scanf("%d",&n2);

    mul= n1 * n2;
 
    printf("%d\n*\n%d\n__\n%d",n1,n2,mul);
}