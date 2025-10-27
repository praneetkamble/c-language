#include<stdio.h>   

int main()
{
    int rup, paisa;

    printf("enter the amount in rupees\n");
    scanf("%d", &rup);

    paisa = rup * 100;

    printf("the amount in paisa is %d", paisa);
    return 0;
}