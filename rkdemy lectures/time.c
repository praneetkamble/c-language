#include<stdio.h>

int main()
{
    int a,b,c;

    printf("enter the time in minutes\n");
    scanf("%d",&a);

    b=a/60;
    c=a%60;

    printf("the time is %d hours and %d minutes",b,c);
    return 0;


}

