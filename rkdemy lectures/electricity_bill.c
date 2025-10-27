#include<stdio.h>

int main(){
    int unit;
    float tb;

    printf("enter the units consumed:");
    scanf("%d",&unit);


    if(unit>=0 && unit<=100){
        printf("the amount to be paid is %f",unit*1.50);
    }

    else if(unit>100 && unit<=200){
        tb=(100*1.50)+(unit-100)*2.50;
        printf("the amount to be paid is %f",tb);
    }

     else if(unit>200 && unit<=300){
        tb=(100*1.50)+(100*2.50)+(unit-200)*4.00;
        printf("the amount to be paid is %f",tb);
    }

      else {
        tb=(100*1.50)+(100*2.50)+(100*4.00)+(unit-300)*5;
        printf("the amount to be paid is %f",tb);
    }
}



