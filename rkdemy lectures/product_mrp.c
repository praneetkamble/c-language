/*take product price of 3 items and display following */

#include<stdio.h>
int main()
{
    float i1,i2,i3,sum,gst,final;
    printf("enter the amount of item 1\n");
    scanf("%f",&i1);
    printf("enter the amount of item 2\n");  
    scanf("%f",&i2);
    printf("enter the amount of item 3\n");
    scanf("%f",&i3);

    sum = i1 + i2 + i3;


    gst = sum * 0.18;
    final = sum + gst;


    printf("item value\t\t %f\n",sum);
    printf("gst \t\t\t  %f\n",gst);
    printf("-------------------------------\n");
    printf("final amount \t\t %f\n",final);
    return 0;
}