/*write a programe in c to take marks of students and print the average of student marks*/


#include<stdio.h>

int main()
{
    int avg,m1,m2,m3,m4,m5;
    char name[30];


    printf("please enter your name\n==>");
    scanf("%s",name);

    printf("\n\n\nhey %s please enter your marks below\n",name);


    printf("---------------------------------------------------------------------------------------------\n");
    printf("SUBJECT \t\t\t  MAX .MARKS OBTAINED \t\t\t MARKS OBTAINED \n");
    printf("---------------------------------------------------------------------------------------------\n");
    printf("english   \t\t\t\t 100 \t\t\t\t\t");
    scanf("%d",&m1);
    printf("maths   \t\t\t\t 100 \t\t\t\t\t");
    scanf("%d",&m2);
    printf("physics   \t\t\t\t 100 \t\t\t\t\t");
    scanf("%d",&m3);
    printf("chemistry \t\t\t\t 100 \t\t\t\t\t");
    scanf("%d",&m4);
    printf("comp sci \t\t\t\t 100 \t\t\t\t\t");
    scanf("%d",&m5);

    printf("---------------------------------------------------------------------------------------------\n\n\n");


    avg = (m1 + m2 + m3+ m4 + m5)/5;
    printf("the average of %s's marks is %d\n",name,avg);

    return 0;
}