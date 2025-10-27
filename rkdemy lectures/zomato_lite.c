#include<stdio.h>
int main(){

    int o;
    printf("menu:\n");
    printf("food \t\t\t amount\n");
    printf("----------------------------------------\n");
    printf("1.pizza\t\t\t 250 rupees\n");
    printf("2.burger\t\t 150 rupees\n");
    printf("3.fries\t\t\t 200 rupees\n");
    printf("4.maggi\t\t\t 100 rupees\n");
    printf("5.vada pav\t\t 50 rupees\n");




    printf("\n\nenter your order :");
    scanf("%d",&o);

    switch(o){
        case 1:
        printf("your order is pizza\n");
        printf("your payable amount is 250");
        break;  
        case 2:
        printf("your order is burger\n");
        printf("your payable amount is 150");
        break;  
        case 3:
        printf("your order is fries\n");
        printf("your payable amount is 200");
        break;  
        case 4:
        printf("your order is maggi\n");
        printf("your payable amount is 100");
        break;  
        case 5:
        printf("your order is vada pav\n");
        printf("your payable amount is 50");
        break;  
    }

}