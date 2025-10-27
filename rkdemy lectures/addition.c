#include<stdio.h>

int main()
{
    int n1,n2,add;

    printf("enter number 1:");
    scanf("%d",&n1);

    printf("enter number 2:");
    scanf("%d",&n2);

    add= n1 + n2;
 
    printf("%d\n+\n%d\n________\n%d",n1,n2,add);
}