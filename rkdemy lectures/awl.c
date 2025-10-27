#include<stdio.h>

int main(){

    int a;
    float w;
    char l;

    
    printf("please enter the initial letter of name :- ");
    scanf("%c",&l);
    printf("please enter the weight :- ");
    scanf("%f",&w);
    printf("please enter the age :- ");
    scanf("%d",&a);
  


    printf("thank you for your input\n your age is %d \nyour weight is %f \n your initial letter of name is %c ", a,w,l);

    return 0;

    


}