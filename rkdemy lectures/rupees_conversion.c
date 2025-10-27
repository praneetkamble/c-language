#include<stdio.h>
int main()
{
    int r;
    float d,e;
    printf("enter the amount in rupees\n");
    scanf("%d",&r); 
    d=r/86.0;
    printf("the amount in dollar is %f",d);
    e=r/103.0;
    printf("\nthe amount in euro is %f",e);
    return 0;
}